/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F56F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f56f0; name: FUN_.text__003f56f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003f56f0(uint param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_70 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *_DAT_008a43d8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_1 < DAT_00ae8870) && // [自动静态注释] 条件判断/分支
     (plVar2 = *(long **)(DAT_00ae8868 + (ulong)param_1 * 8), plVar2 != (long *)0x0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
      __dest = *(void **)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while ((**(code **)(*(long *)**(undefined8 **)((long)__dest + 0x10) + 0x18)) // [自动静态注释] 循环/迭代
                         ((long *)**(undefined8 **)((long)__dest + 0x10),local_70), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              local_70[0] == param_1) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          (**(code **)(*(long *)**(undefined8 **)((long)__dest + 0x10) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          **(undefined8 **)((long)__dest + 0x10) = 0;
          lVar6 = *(long *)((long)__dest + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
            if (*(long *)(lVar6 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
              *(undefined4 *)(lVar6 + 0x20) = 0;
              if (*(long *)(lVar6 + 0x18) != lVar6 + 0x10) { // [自动静态注释] 条件判断/分支
                FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
              } // [自动静态注释] 作用域/控制流边界
              *(undefined8 *)(lVar6 + 0x18) = 0;
              *(undefined4 *)(lVar6 + 0x24) = 0;
              lVar6 = *(long *)((long)__dest + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            FUN__text__00400fc0(0,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
            *(undefined8 *)((long)__dest + 0x10) = 0;
          } // [自动静态注释] 作用域/控制流边界
          uVar4 = *(int *)(lVar1 + 0x10) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pvVar5 = (void *)(*(long *)(lVar1 + 8) + (ulong)uVar4 * 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (__dest < pvVar5) { // [自动静态注释] 条件判断/分支
            memmove(__dest,(void *)((long)__dest + 0x18),(ulong)(uint)((int)pvVar5 - (int)__dest)); // [自动静态注释] 内存复制、清零或移动
            uVar4 = *(int *)(lVar1 + 0x10) - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *(uint *)(lVar1 + 0x10) = uVar4;
          if (__dest == (void *)(*(long *)(lVar1 + 8) + (ulong)uVar4 * 0x18)) // [自动静态注释] 条件判断/分支
          goto LAB__text__003f5850; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        __dest = (void *)((long)__dest + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (__dest != (void *)(*(long *)(lVar1 + 8) + (ulong)*(uint *)(lVar1 + 0x10) * 0x18)); // [自动静态注释] 循环/迭代
LAB__text__003f5850: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      plVar2 = *(long **)(DAT_00ae8868 + (ulong)param_1 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    (**(code **)(*plVar2 + 0x30))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(DAT_00ae8868 + (ulong)param_1 * 8) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


