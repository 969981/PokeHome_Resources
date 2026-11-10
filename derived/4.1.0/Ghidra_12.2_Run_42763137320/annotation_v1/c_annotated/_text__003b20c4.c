/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B20C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b20c4; name: FUN_.text__003b20c4
 */


undefined8 FUN__text__003b20c4(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_50 [24]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = param_1 + -0xa8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_2 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__003b0f04(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__005e927c(auStack_50,0x882660); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__003c1e4c(auStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (local_38 != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__003b11fc(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + -0x23) = 1;
  FUN__text__003a1648(lVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined4 *)(param_1 + 0x7c0) = 0xffffffff;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


