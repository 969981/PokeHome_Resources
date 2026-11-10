/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00105D60
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205d60; name: FUN_.text__00205d60
 */


void FUN__text__00205d60(int *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  byte bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar3 = FUN__text__00631008(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_1 = iVar3;
  uVar2 = FUN__text__00631010(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined2 *)(param_1 + 1) = uVar2;
  iVar3 = FUN__text__0063378c(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[2] = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar1 = FUN__text__00634538(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)(param_1 + 3) = bVar1 & 1;
  bVar1 = FUN__text__00633b34(param_2,2); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(byte *)((long)param_1 + 0xd) = bVar1 & 1;
  iVar3 = FUN__text__00634578(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[4] = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = FUN__text__006319d4(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  param_1[5] = uVar4 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[6] = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 0x365) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__00631324(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[6] = uVar4 & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((iVar3 == 0x37a) && ((short)param_1[1] == 1)) { // [自动静态注释] 条件判断/分支
    *(undefined2 *)(param_1 + 1) = 0;
    param_1[5] = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


