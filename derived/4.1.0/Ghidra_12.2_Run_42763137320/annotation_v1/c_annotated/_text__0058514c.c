/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0048514C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058514c; name: FUN_.text__0058514c
 */


undefined8 FUN__text__0058514c(long param_1,int *param_2,undefined4 *param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  short *psVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  psVar4 = *(short **)(param_2 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*psVar4 == -1) && (*param_2 == 0x42)) { // [自动静态注释] 条件判断/分支
    uVar10 = *(undefined4 *)(psVar4 + 10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x68) = uVar10;
    uVar1 = psVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_3 = *(undefined4 *)(psVar4 + 2);
    param_3[1] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = (*(byte *)((long)param_3 + 10) & 0xf8) << 0x10 | (uVar1 & 0xff) << 8 | 0x50020; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(short *)(param_3 + 2) = (short)uVar2;
    *(char *)((long)param_3 + 10) = (char)(uVar2 >> 0x10);
    param_3[4] = *(undefined4 *)(psVar4 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined4 *)(psVar4 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0xd4) = uVar10;
    param_3[5] = uVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = *(undefined8 *)(psVar4 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(psVar4 + 0x1a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *(undefined8 *)(psVar4 + 0x1d); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(psVar4 + 0x16);
    uVar8 = *(undefined8 *)(psVar4 + 0xe); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x96) = uVar7;
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    *(undefined8 *)(param_1 + 0x78) = uVar8;
    *(undefined8 *)(param_1 + 0x80) = uVar9;
    *(short *)(param_1 + 0x8c) = *(short *)(param_1 + 0x8c) + 8;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(psVar4 + 2);
    *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(param_4 + 8);
    if (*(short *)(param_4 + 8) == 1) { // [自动静态注释] 条件判断/分支
      param_3[8] = *(int *)(param_1 + 0x88) + param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar5 = param_2[4] + param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_3[8] = param_2[5] + *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar5 = param_2[5] + *(int *)(param_1 + 0x7c) + *(int *)(param_1 + 0x84); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_3[9] = iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar10 = *(undefined4 *)(psVar4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3[6] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)NEON_ucvtf(uVar10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_3[7] = fVar11 * 0.001; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(param_1 + 0x84) != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = FUN__text__00400f80(5); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(long *)(param_1 + 0xa8) = lVar3;
      if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x10) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return uVar9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


