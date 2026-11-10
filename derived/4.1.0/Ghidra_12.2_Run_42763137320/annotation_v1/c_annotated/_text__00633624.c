/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00533624
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633624; name: FUN_.text__00633624
 */


void FUN__text__00633624(long param_1,uint param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (((param_2 & 0xff) == (param_3 & 0xff)) || (3 < ((param_3 | param_2) & 0xff))) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined1 *)(param_1 + 0x54));
  uVar2 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined1 *)(param_1 + 0x54));
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined1 *)(param_1 + 0x54));
  uVar5 = *(undefined8 *)(param_1 + 0x2f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__006120d0(uVar5,param_3,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061d7c0(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = *(undefined8 *)(param_1 + 0x2f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__006125e0(uVar5,param_3,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061dce0(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = *(undefined8 *)(param_1 + 0x2f0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__00612a70(uVar5,param_3,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061e170(uVar5,param_2,uVar4,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0061d7c0(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar1,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0061e170(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar3,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),param_3,uVar2,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                     ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


