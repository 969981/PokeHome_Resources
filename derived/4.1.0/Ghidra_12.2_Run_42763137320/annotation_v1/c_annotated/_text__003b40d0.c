/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002B40D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b40d0; name: FUN_.text__003b40d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b40d0(undefined1 param_1 [16],undefined8 param_2,long param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uStack_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar12 = (float)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar9 = &local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = *(int *)(param_3 + 0xbc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar3 = *(int *)(param_3 + 0xc0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4 = iVar2 + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar1 = iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (param_4 <= iVar3) { // [自动静态注释] 条件判断/分支
    iVar1 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(int *)(param_3 + 0xbc) = iVar1;
  puVar8 = _DAT_008a04a8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(int *)(param_3 + 0xb8) == 1) { // [自动静态注释] 条件判断/分支
    if (param_4 < iVar3) goto LAB__text__003b427c; // [自动静态注释] 条件判断/分支
    puVar7 = (ulong *)FUN__text__003b8e30(*(long *)(param_3 + 0xb0) + 0x788, // [自动静态注释] 调用尚未恢复正式名称的函数
                                          *(undefined4 *)(param_3 + 0x80));
    if (puVar7 != (ulong *)0x0) { // [自动静态注释] 条件判断/分支
      uStack_48 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = &local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(*(undefined8 *)(param_3 + 0xb0),&local_50,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__003a14e8(local_60,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar8 = (undefined8 *)(param_3 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar9 = (undefined8 *)(param_3 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = *(undefined4 *)(param_3 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0xb0) + 0x768); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(int *)(param_3 + 0xb8) != 0) goto LAB__text__003b427c; // [自动静态注释] 条件判断/分支
    fVar13 = (float)iVar2 / (float)iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *(float *)(param_3 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = *(float *)(param_3 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)iVar1 / (float)iVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*_DAT_008a04a8)(fVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar18 = *(float *)(param_3 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = *(float *)(param_3 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = (undefined8 *)CONCAT44(local_50._4_4_,fVar15 + fVar12 * (fVar17 - fVar15)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*puVar8)(fVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = *(float *)(param_3 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *(float *)(param_3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = (undefined8 *)CONCAT44(fVar16 + fVar12 * (fVar18 - fVar16),(undefined4)local_50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*puVar8)(fVar14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(param_3 + 0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = *(float *)(param_3 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_48 = (ulong)(uint)(fVar15 + fVar12 * (fVar17 - fVar15)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*puVar8)(fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar17 = *(float *)(param_3 + 0xa4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *(float *)(param_3 + 0x94); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = CONCAT44(local_60._4_4_,fVar14 + fVar12 * (fVar16 - fVar14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*puVar8)(fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar16 = *(float *)(param_3 + 0xa8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = *(float *)(param_3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_60 = CONCAT44(fVar15 + fVar12 * (fVar17 - fVar15),(undefined4)local_60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar12 = (float)(*(code *)*puVar8)(fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = &local_50; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = *(undefined4 *)(param_3 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0xb0) + 0x768); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_58 = (ulong)(uint)(fVar14 + fVar12 * (fVar16 - fVar14)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_2 = local_60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  fVar12 = (float)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__003b7c4c(uVar6,uVar5,puVar8,puVar9); // [自动静态注释] 调用尚未恢复正式名称的函数
LAB__text__003b427c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (*(int *)(param_3 + 0xc0) <= *(int *)(param_3 + 0xbc)) { // [自动静态注释] 条件判断/分支
    if (*(int *)(param_3 + 0x88) != *(int *)(param_3 + 0x84)) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_3 + 0xbc) = 0;
      *(undefined4 *)(param_3 + 0x88) = *(undefined4 *)(param_3 + 0x8c);
      uVar5 = FUN__text__003b3f6c(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar10 = *(long **)(param_3 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_3 + 0x8c) = uVar5;
      fVar14 = (float)(**(code **)(*plVar10 + 0xe0))(plVar10,*(undefined4 *)(param_3 + 0x88)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (int)plVar10[0xd8] != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar11 = *(long **)(param_3 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar13 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar4) { // [自动静态注释] 条件判断/分支
        fVar13 = *(float *)((long)plVar10 + 0x6fc) * (float)*(int *)(plVar10[0x100] + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar15 = -((float)*(int *)(plVar10[0x100] + 0x10) * *(float *)(plVar10 + 0xe0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar4) { // [自动静态注释] 条件判断/分支
        fVar15 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_3 + 0x98) = 0;
      *(ulong *)(param_3 + 0x90) = CONCAT44(fVar12 - fVar15,fVar14 - fVar13);
      fVar14 = (float)(**(code **)(*plVar11 + 0xe0))(plVar11,*(undefined4 *)(param_3 + 0x8c)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar4 = (int)plVar11[0xd8] != 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar13 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar4) { // [自动静态注释] 条件判断/分支
        fVar13 = *(float *)((long)plVar11 + 0x6fc) * (float)*(int *)(plVar11[0x100] + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar15 = -((float)*(int *)(plVar11[0x100] + 0x10) * *(float *)(plVar11 + 0xe0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar4) { // [自动静态注释] 条件判断/分支
        fVar15 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_3 + 0xa8) = 0;
      *(ulong *)(param_3 + 0xa0) = CONCAT44(fVar12 - fVar15,fVar14 - fVar13);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__003c3008(param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


