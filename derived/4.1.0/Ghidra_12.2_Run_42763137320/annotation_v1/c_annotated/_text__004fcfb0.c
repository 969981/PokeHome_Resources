/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003FCFB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fcfb0; name: FUN_.text__004fcfb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004fcfb0(long *param_1,int param_2,undefined8 *param_3,uint *param_4,int *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long param_6,int param_7,long param_8,byte param_9,undefined8 param_10) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_6c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_64; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar7 = FUN__text__004f6178(param_6,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar10 = param_1[0x12]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(byte *)(lVar10 + 0x48) & 6) == 4) { // [自动静态注释] 条件判断/分支
    uVar5 = (int)param_8 - param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_64 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = param_2 - *(int *)(lVar10 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_68 = *(undefined4 *)(lVar10 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar5 <= uVar6) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    dVar11 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar11 = ((double)(int)uVar6 * 1000.0) / dVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar12 = 0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (dVar11 <= 0.0) { // [自动静态注释] 条件判断/分支
      dVar12 = -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    local_6c = (int)(dVar12 + dVar11); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004ebee4(*(undefined8 *)(lVar10 + 8),&local_6c); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) & 0xfb;
    uVar6 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(lVar10 + 0x18) = 0;
    *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) & 0xf9;
    uVar6 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar7 == 0) || ((int)uVar6 < 1)) { // [自动静态注释] 条件判断/分支
    lVar9 = param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (((byte)param_4[4] >> 5 & 1) == 0) { // [自动静态注释] 条件判断/分支
      bVar1 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar8 = FUN__text__004f6530(param_6,param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
      bVar1 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar7 != 0) && ((uVar8 & 1) != 0)) { // [自动静态注释] 条件判断/分支
        uVar8 = FUN__text__004f47f4(lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar9 = param_8 + (uVar8 & 0xffffffff); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        bVar1 = true; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar9 = param_8 - (int)((int)(((ulong)*_DAT_008a4b68 * (ulong)uVar6) / 1000) - param_4[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar1 = (int)param_4[2] < 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(lVar10 + 0x38) = lVar9;
  *(uint *)(lVar10 + 0x40) = uVar6;
  *(uint *)(lVar10 + 0x44) = uVar5;
  *(byte *)(lVar10 + 0x48) = *(byte *)(lVar10 + 0x48) | 6;
  if (((param_9 & 1) == 0) && (bVar1)) { // [自动静态注释] 条件判断/分支
    if (*(char *)(lVar10 + 0x18) == '\0') { // [自动静态注释] 条件判断/分支
      *(long *)(lVar10 + 0x10) = param_8;
      *(undefined1 *)(lVar10 + 0x18) = 1;
    } // [自动静态注释] 作用域/控制流边界
    else if (param_8 < *(long *)(lVar10 + 0x10)) { // [自动静态注释] 条件判断/分支
      *(long *)(lVar10 + 0x10) = param_8;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004e9e48(*(undefined8 *)(param_6 + 0x108),(byte)param_4[4] >> 5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(long *)(param_3[1] + 0x68) = param_8;
  param_3[4] = param_8 - param_7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = param_5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_3[5] = *(undefined8 *)param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(int *)(param_3 + 6) = iVar3;
  lVar7 = (**(code **)(*(long *)param_3[1] + 0xd0))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar7 == 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_3 + 5) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (0 < *param_5) { // [自动静态注释] 条件判断/分支
    *(int *)(param_3 + 6) = *(int *)(param_3 + 6) + param_7;
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_3 + 9) = *(byte *)(param_3 + 9) | 1;
  FUN__text__004f6600(param_6,param_10,param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
  cVar4 = *(char *)(param_6 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (cVar4 == '\0') { // [自动静态注释] 循环/迭代
    (**(code **)(*param_1 + 0xb8))(param_1,param_6,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004f6600(param_6,param_10,param_8); // [自动静态注释] 调用尚未恢复正式名称的函数
    cVar4 = *(char *)(param_6 + 0x128); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *param_3 = 0;
  plVar2 = param_1 + 0x13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_1[0x13] != 0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)param_1[0x12]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *plVar2 = (long)param_3;
  param_1[0x12] = (long)param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


