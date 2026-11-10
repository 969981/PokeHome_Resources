/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005AB388
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ab388; name: FUN_.text__006ab388
 */


void FUN__text__006ab388(undefined8 param_1,ushort *param_2,long param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = *(long *)(param_4 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = FUN__text__006a4e14(*(undefined8 *)(param_4 + 0xa0)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = FUN__text__006c1a70(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar7 == param_3) { // [自动静态注释] 条件判断/分支
    iVar6 = iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar6 = *(int *)(param_4 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar2 = FUN__text__006c1b00(param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar6 = iVar2 + iVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = FUN__text__006a4e08(*(undefined8 *)(param_4 + 0xa0),iVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar7 = FUN__text__006a4a30(uVar4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006a4600(uVar4,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar5 = *param_2 | 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_2 = uVar5 & 0xf1ff | ((short)iVar1 - (short)iVar6) * 0x200 & 0xe00U;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


