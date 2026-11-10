/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B9400
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b9400; name: FUN_.text__006b9400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b9400(long *param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006b2060(); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar1 = _DAT_008a6918; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = param_1 + 0x1e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = 0;
  param_1[0x1f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar1 + 0x10;
  lVar1 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(short *)(param_6 + 0x44) != 0 || param_5 == 0) { // [自动静态注释] 条件判断/分支
    lVar1 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  bVar2 = *(byte *)(lVar1 + 0x67); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (uint)*(byte *)(lVar1 + 0x66); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (2 < uVar6) { // [自动静态注释] 条件判断/分支
    uVar6 = 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x1b] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1c] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x1d] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((bVar2 & 1) == 0) && (uVar6 != 0)) { // [自动静态注释] 条件判断/分支
    FUN__text__0069d6f4(plVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0069d730(plVar5,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar1 + 0x54);
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(lVar1 + 0x5c);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(lVar1 + 0x60);
  if (uVar6 == 0) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x68; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (((bVar2 & 1) == 0) && ((char)*plVar5 != '\0')) { // [自动静态注释] 条件判断/分支
      FUN__text__0069d860(plVar5,lVar1 + 0x68,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar7 = (ulong)(uVar6 * 0x20 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((bVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006b95b8(param_1,param_2,param_3,lVar1,param_6,*(undefined4 *)(lVar1 + uVar7)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x30),*(undefined2 *)(param_4 + 100)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__0069d8f0(*(undefined8 *)(param_6 + 0x38),*(undefined2 *)(param_5 + 100)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar5 = (long *)FUN__text__006a0f04(0x50); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (plVar5 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    *plVar5 = _DAT_008a69f0 + 0x10;
    FUN__text__006a9930(plVar5,param_2,param_3,uVar3,uVar4,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  param_1[0x1b] = (long)plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__006ab450(plVar5,param_2,param_3,param_6); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__006b97f8(param_1,param_2,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


