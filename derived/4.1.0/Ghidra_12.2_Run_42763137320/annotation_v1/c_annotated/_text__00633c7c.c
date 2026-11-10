/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00533C7C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00633c7c; name: FUN_.text__00633c7c
 */


void FUN__text__00633c7c(long param_1,uint param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar4 & 0xffff) != (param_2 & 0xffff)) { // [自动静态注释] 条件判断/分支
    FUN__text__00633e68(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0061e8a0(*(undefined8 *)(param_1 + 0x2f0),param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = FUN__text__00615df0(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar8 = FUN__text__006162b0(*(undefined8 *)(param_1 + 0x2f0),*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar8 & 1) == 0) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar5 & 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = FUN__text__00638c38(uVar3,param_2,uVar4,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0061cfb0(*(undefined8 *)(param_1 + 0x2f0),uVar6,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = FUN__text__006157c0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__00638bb8(uVar3,param_2,uVar6,*(undefined1 *)(param_1 + 0x54)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0061e710(*(undefined8 *)(param_1 + 0x2f0),uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006316f4(param_1,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar1 = FUN__text__0061ba50(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__0061bbd0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar9 = FUN__text__00638558(uVar3,uVar6,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar3 = FUN__text__006385b0(uVar3,uVar6,uVar2,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00622260(uVar9,*(undefined8 *)(param_1 + 0x2f0),3); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006224e0(uVar3,*(undefined8 *)(param_1 + 0x2f0),3); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar7 = FUN__text__0060fed0(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = FUN__text__00615940(*(undefined8 *)(param_1 + 0x2f0)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((iVar7 == 0x3f9) && ((uVar4 & 0xffff) < 4)) { // [自动静态注释] 条件判断/分支
      FUN__text__006217f0(*(undefined8 *)(param_1 + 0x2f0),0x5090a0b >> (ulong)((uVar4 & 3) << 3)); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


