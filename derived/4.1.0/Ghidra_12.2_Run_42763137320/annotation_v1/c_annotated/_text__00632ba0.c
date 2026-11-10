/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00532BA0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00632ba0; name: FUN_.text__00632ba0
 */


void FUN__text__00632ba0(long param_1,ulong param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar7 = param_2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),param_2, // [自动静态注释] 调用尚未恢复正式名称的函数
                              *(undefined1 *)(param_1 + 0x54));
  if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar4 = FUN__text__0063cbb8(uVar2,uVar3,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar5 = FUN__text__006125e0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar5 = (uVar5 & 0xff) + (param_3 & 0xff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar4 & 0xff) <= uVar5) { // [自动静态注释] 条件判断/分支
    uVar5 = uVar4 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__006120d0(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar3 = FUN__text__00612a70(*(undefined8 *)(param_1 + 0x2f0),uVar7,*(undefined1 *)(param_1 + 0x54) // [自动静态注释] 调用尚未恢复正式名称的函数
                             ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar6 = FUN__text__0063cbb8(uVar2,uVar3,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = uVar6 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 <= (uVar6 & 0xff)) { // [自动静态注释] 条件判断/分支
    uVar4 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0061dce0(*(undefined8 *)(param_1 + 0x2f0),uVar7,uVar4,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


