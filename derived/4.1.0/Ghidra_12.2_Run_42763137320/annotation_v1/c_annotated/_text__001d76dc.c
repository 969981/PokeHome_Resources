/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000D76DC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d76dc; name: FUN_.text__001d76dc
 */


void FUN__text__001d76dc(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 0x30) = 0xd3e246895da5aa50;
  *(undefined8 *)(param_1 + 0x28) = 0x391abf303cb31731;
  *(undefined8 *)(param_1 + 0x38) = 0x176cee07a71ffd76;
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__001156d0(&local_38,uVar1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar2 = *(long *)(local_38 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_40 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((lVar2 == 0) || ((**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(), local_38 != 0)) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) goto LAB__text__001d782c; // [自动静态注释] 条件判断/分支
    if (lVar2 == 0) goto LAB__text__001d77a8; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = *(long *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__001d782c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__001d77a8: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  local_38 = 0x1f28316c8ced4f4f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__001ac1fc(lVar3,(undefined8 *)(param_1 + 0x30),&local_40,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_40 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN__text__001d7848(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN__text__001d7848(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


