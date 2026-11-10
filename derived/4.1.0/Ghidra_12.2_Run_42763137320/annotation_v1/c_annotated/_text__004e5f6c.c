/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E5F6C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e5f6c; name: FUN_.text__004e5f6c
 */


void FUN__text__004e5f6c(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004470f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_2 == 0xffffffff) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 400) = 0;
    *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 8;
    FUN__text__004470a8(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(byte *)(param_1 + 0x194) >> 1 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *(byte *)(param_1 + 0x194) = *(byte *)(param_1 + 0x194) | 2;
      FUN__text__00447104(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (param_2 < *(uint *)(param_1 + 400)) { // [自动静态注释] 条件判断/分支
    *(uint *)(param_1 + 400) = param_2;
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_28 = (**(code **)(*plVar2 + 0x38))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046c3b0(plVar2,&local_28,uVar1 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00447104(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


