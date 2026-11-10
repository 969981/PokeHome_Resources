/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058AA54
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068aa54; name: FUN_.text__0068aa54
 */


void FUN__text__0068aa54(float param_1,float *param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined1 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ushort uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = *(ushort *)(param_3 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(*(long *)(param_2 + 10) + 9) == '\0') { // [自动静态注释] 条件判断/分支
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = (float)uVar2 / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = (float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = (float)*(ushort *)(param_3 + 0x1a) / fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = param_2[3] * fVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = param_2[4] * fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) / fVar13 // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar8 = *(long *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = *(int *)(lVar8 + 0x9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar8 + 0x98) <= iVar6) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = ((float)uVar2 + -0.5) / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar10 = ((float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar2) + 0.5) / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1 = param_1 + param_2[3] * -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = param_2[6] + param_2[4] * -0.5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar4 = param_2[3] * (fVar4 + 1.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar5 = param_2[4] * (fVar5 + 1.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = ((float)*(ushort *)(param_3 + 0x1a) + -0.5) / fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = ((float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) + 0.5) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             / fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar8 = *(long *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = *(int *)(lVar8 + 0x9c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(int *)(lVar8 + 0x98) <= iVar6) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(lVar8 + 0x9c) = iVar6 + 1;
  pfVar9 = (float *)(*(long *)(*(long *)(param_2 + 0xc) + 0xa0) + (long)iVar6 * 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *pfVar9 = fVar4;
  pfVar9[1] = fVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[2] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[3] = fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[4] = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[5] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(undefined1 *)((long)param_2 + 0x39); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[6] = fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[7] = 1.0 - fVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[8] = fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar9[9] = 1.0 - fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)pfVar9 + 0x33) = uVar1;
  fVar10 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar12 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar6 = (**(code **)(**(long **)(param_2 + 10) + 0x20))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(short *)(pfVar9 + 0xc) = (short)(int)(fVar10 * fVar12 * (float)iVar6);
  iVar6 = (**(code **)(**(long **)(param_2 + 10) + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar10 = -0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(*(long *)(param_2 + 10) + 9) != '\0') { // [自动静态注释] 条件判断/分支
    fVar10 = param_2[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0068bb30(param_2[4] * (float)iVar6 + fVar10,*(undefined8 *)(param_2 + 0xc)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined1 *)((long)pfVar9 + 0x32) = *(undefined1 *)(param_3 + 0x2a);
  uVar7 = (**(code **)(**(long **)(param_2 + 10) + 0x118))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ulong *)(pfVar9 + 10) = *(ulong *)(param_3 + 0x20) | uVar7 & 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


