/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00015454
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115454; name: FUN_.text__00115454
 */


undefined8 FUN__text__00115454(long param_1,long param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_60 [3]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) == 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(uint *)(param_1 + 0x2230); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 0x16c) { // [自动静态注释] 条件判断/分支
    lVar3 = param_1 + (ulong)uVar1 * 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar4 = (long *)(lVar3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*plVar4 == 0) { // [自动静态注释] 条件判断/分支
      plVar2 = (long *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00109fd4(local_60,*(undefined8 *)(param_2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*plVar2 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *plVar2 = local_60[0];
      FUN__text__00112060(local_60,*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*plVar4 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      *plVar4 = local_60[0];
      if (local_60[0] != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__005e9290(local_60,plVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00158f14(local_60[0],local_60,param_3,1); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (local_48 != 0) { // [自动静态注释] 条件判断/分支
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)(param_1 + (ulong)uVar1 * 0x18 + 0x20) = param_3;
        *(int *)(param_1 + 0x2230) = *(int *)(param_1 + 0x2230) + 1;
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


