/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00525BFC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00625bfc; name: FUN_.text__00625bfc
 */


void FUN__text__00625bfc(undefined8 param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_40 [32]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__0060eea4(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0060efe0(auStack_40,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__0060f6e0(auStack_40,4); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = FUN__text__0060f6e0(auStack_40,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar3 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = FUN__text__0060f6e0(auStack_40,3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((uVar2 & 1) == 0) goto LAB__text__00625c7c; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__006183b0(auStack_40,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061f590(auStack_40,uVar1,2); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__00625c7c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0060eef8(auStack_40); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


