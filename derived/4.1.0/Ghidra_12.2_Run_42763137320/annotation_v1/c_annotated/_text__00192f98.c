/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00092F98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192f98; name: FUN_.text__00192f98
 */


void FUN__text__00192f98(long param_1,long *param_2,uint param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 < *(uint *)(param_1 + 8)) { // [自动静态注释] 条件判断/分支
    lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x50,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    param_1 = param_1 + (ulong)param_3 * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__00192dd4(lVar1,param_2,param_3,param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar2 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(param_1 + 0x10) = lVar1;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      lVar1 = *(long *)(lVar2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar2 + 0x30) = 0;
      if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__0016f4b0(lVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        (**(code **)(**(long **)(lVar2 + 0x38) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(lVar2 + 0x38),lVar1,*(undefined8 *)(lVar2 + 0x40), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(lVar2 + 0x48));
      } // [自动静态注释] 作用域/控制流边界
      puVar3 = *(undefined8 **)(lVar2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar2 + 0x10) = 0;
      if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(lVar2 + 0x18) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(lVar2 + 0x18),puVar3,*(undefined8 *)(lVar2 + 0x20), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(lVar2 + 0x28));
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(**(long **)(param_1 + 0x18) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(param_1 + 0x18),lVar2,*(undefined8 *)(param_1 + 0x20), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(param_1 + 0x28));
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x20) = 0x50;
    *(undefined8 *)(param_1 + 0x28) = 8;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


