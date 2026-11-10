/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003AAC20
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aac20; name: FUN_.text__004aac20
 */


void FUN__text__004aac20(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
    uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = *(long **)(lVar2 + uVar5 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (plVar4 != (long *)0x0) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar6 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = (ulong)*(uint *)(plVar4 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar1 = (undefined8 *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(uint *)(plVar4 + 3) != 0) { // [自动静态注释] 条件判断/分支
            __dest = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            do { // [自动静态注释] 循环/迭代
              while (*(char *)((long)__dest + 0xc) != '\x01') { // [自动静态注释] 循环/迭代
                __dest = __dest + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                if (__dest == puVar1 + uVar3 * 3) goto LAB__text__004aad1c; // [自动静态注释] 条件判断/分支
              } // [自动静态注释] 作用域/控制流边界
              FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest); // [自动静态注释] 调用尚未恢复正式名称的函数
              uVar3 = (ulong)((int)plVar4[3] - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              puVar1 = (undefined8 *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              if (__dest < puVar1 + uVar3 * 3) { // [自动静态注释] 条件判断/分支
                memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar1 + uVar3 * 3) - (int)__dest)); // [自动静态注释] 内存复制、清零或移动
                uVar3 = (ulong)((int)plVar4[3] - 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                puVar1 = (undefined8 *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              } // [自动静态注释] 作用域/控制流边界
              *(int *)(plVar4 + 3) = (int)uVar3;
            } while (__dest != puVar1 + uVar3 * 3); // [自动静态注释] 循环/迭代
          } // [自动静态注释] 作用域/控制流边界
LAB__text__004aad1c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (puVar1 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(plVar4 + 3) = 0;
            FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
            plVar4[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)((long)plVar4 + 0x1c) = 0;
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00400fc0(0,plVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
          plVar4 = plVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar6 != (long *)0x0); // [自动静态注释] 循环/迭代
        lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar5 < *(uint *)(param_1 + 0x10)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x18) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


