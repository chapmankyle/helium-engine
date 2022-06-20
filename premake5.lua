workspace "Helium"
	architecture "x64"
	startproject "Sandbox"

	configurations {
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

-- Helium Engine
project "Helium"
	location "Helium"
	kind "SharedLib"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("cached/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.hpp",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"%{prj.name}/deps/spdlog/include"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "10.0.19041.0"

		defines {
			"HELIUM_PLATFORM_WINDOWS",
			"HELIUM_BUILD_DLL"
		}

		postbuildcommands {
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox/")
		}

	filter "configurations:Debug"
		defines "HELIUM_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "HELIUM_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "HELIUM_DIST"
		optimize "On"

-- Sandbox app
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("cached/" .. outputdir .. "/%{prj.name}")

	files {
		"%{prj.name}/src/**.hpp",
		"%{prj.name}/src/**.cpp"
	}

	includedirs {
		"Helium/src",
		"Helium/deps/spdlog/include"
	}

	links {
		"Helium"
	}

	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "10.0.19041.0"

		defines {
			"HELIUM_PLATFORM_WINDOWS"
		}

	filter "configurations:Debug"
		defines "HELIUM_DEBUG"
		symbols "On"

	filter "configurations:Release"
		defines "HELIUM_RELEASE"
		optimize "On"

	filter "configurations:Dist"
		defines "HELIUM_DIST"
		optimize "On"
