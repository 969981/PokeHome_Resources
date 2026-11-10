/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B1570
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b1570; name: FUN_.text__006b1570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b1570(long param_1,short *param_2,long param_3,int *param_4,int param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short sVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = nn::util::BinaryFileHeader::GetFirstBlock(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = *(undefined8 *) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
           (*(long *)(*(long *)(lVar3 + 0x20) + (long)param_5 * 0x40 + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                     *(long *)(_DAT_008a5970 + ((ulong)*(uint *)(param_1 + 8) & 7) * 8)) + 0x68);
  FUN__text__006ebdd8(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x7178de); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar2 < 0) { // [自动静态注释] 条件判断/分支
    iVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006ebdbc(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(param_3 + 2) = (short)iVar2;
    *(undefined2 *)(param_3 + 4) = 0;
    *(undefined8 *)(param_3 + 8) = 0x170500000000;
    *(undefined8 *)(param_3 + 0x10) = 0x7178de;
  } // [自动静态注释] 作用域/控制流边界
  bVar1 = iVar2 >= 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)bVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x712239); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (-1 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = param_3 + uVar6 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebdbc(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar6 = (ulong)(bVar1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1805;
    iVar7 = iVar7 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar3 + 0x10) = 0x712239;
    *(undefined2 *)(lVar3 + 4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x715960); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (-1 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = param_3 + uVar6 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebdbc(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1705;
    uVar6 = (ulong)((int)uVar6 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar7 = iVar7 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(undefined8 *)(lVar3 + 0x10) = 0x715960;
    *(undefined2 *)(lVar3 + 4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  sVar5 = (short)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = FUN__text__006f3f40(uVar4,0,0,0x70bed1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (-1 < iVar2) { // [自动静态注释] 条件判断/分支
    lVar3 = param_3 + uVar6 * 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__006ebdbc(lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(lVar3 + 8) = iVar7;
    *(undefined4 *)(lVar3 + 0xc) = 0x1705;
    sVar5 = sVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar7 = iVar7 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(lVar3 + 2) = (short)iVar2;
    *(undefined8 *)(lVar3 + 0x10) = 0x70bed1;
    *(undefined2 *)(lVar3 + 4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006ebdd0(param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  *param_4 = iVar7;
  param_4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = sVar5;
  param_2[1] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_2 + 4) = param_3;
  *(int **)(param_2 + 8) = param_4;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


