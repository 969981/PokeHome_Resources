/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00419830
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00519830; name: FUN_.text__00519830
 */


bool FUN__text__00519830(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        long *param_5,undefined8 param_6,undefined8 param_7,int param_8) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar19; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar20; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar22; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar23; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_61; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar5 = (uint *)(**(code **)*param_5)(param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar5 != (uint *)0x0) { // [自动静态注释] 条件判断/分支
    uVar8 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar5 + 4) = param_3[1];
    *(undefined8 *)(puVar5 + 6) = uVar9;
    *(undefined8 *)(puVar5 + 2) = uVar8;
    uVar8 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = param_4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar4 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(puVar5 + 0x3a) = param_4[1];
    *(undefined8 *)(puVar5 + 0x3c) = uVar9;
    *(undefined8 *)(puVar5 + 0x38) = uVar8;
    puVar5[0x3e] = (int)*(char *)(param_2 + 0x6e); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar10 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = iVar4 + puVar5[0x3e]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 < 8) { // [自动静态注释] 条件判断/分支
        fVar12 = *(float *)(lVar10 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar13 = *(float *)(lVar10 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar11 = (float)FUN__text__0051727c(*(undefined4 *)(lVar10 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                                            *(undefined8 *)(lVar10 + 0x30));
        lVar6 = *(long *)(lVar10 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar21 = *(float *)(lVar6 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar19 = *(float *)(lVar6 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = 0x50c5d1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*puVar5 != 0) { // [自动静态注释] 条件判断/分支
          uVar2 = *puVar5 * 0x1000193; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        fVar12 = *(float *)(lVar6 + 0x3c) * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar11 = *(float *)(lVar6 + 0x38) * fVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar13 = *(float *)(lVar6 + 0x40) * fVar13; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar14 = *(float *)(lVar6 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar17 = *(float *)(lVar6 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar22 = fVar19 * fVar11 + fVar12 * fVar14 + fVar13 * fVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar23 = fVar21 * fVar21 - (fVar19 * fVar19 + fVar14 * fVar14 + fVar17 * fVar17); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar20 = (fVar14 * fVar13 - fVar17 * fVar12) * fVar21 + fVar19 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = (fVar17 * fVar11 - fVar13 * fVar19) * fVar21 + fVar14 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar19 = (fVar19 * fVar12 - fVar14 * fVar11) * fVar21 + fVar17 * fVar22; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        dVar16 = *(double *)(lVar6 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        dVar18 = *(double *)(lVar6 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 0xc) =
             *(double *)(lVar6 + 0x30) + (double)(fVar19 + fVar19 + fVar13 * fVar23);
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 8) =
             dVar16 + (double)(fVar20 + fVar20 + fVar11 * fVar23); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(double *)(puVar5 + (ulong)uVar1 * 6 + 10) =
             dVar18 + (double)(fVar15 + fVar15 + fVar12 * fVar23); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar1 = **(uint **)(lVar10 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar8 = **(undefined8 **)(lVar10 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (((uVar2 ^ uVar1 & 0xff) * 0x1000193 ^ uVar1 >> 8 & 0xff) * 0x1000193 ^ // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                uVar1 >> 0x10 & 0xff) * 0x1000193 ^ uVar1 >> 0x18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar1 = 0x50c5d1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
          uVar1 = uVar2 * 0x1000193; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = (uint)uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar2 = (uint)((ulong)uVar8 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar5 = (((((((uVar1 ^ uVar7 & 0xff) * 0x1000193 ^ uVar7 >> 8 & 0xff) * 0x1000193 ^
                      uVar7 >> 0x10 & 0xff) * 0x1000193 ^ uVar7 >> 0x18) * 0x1000193 ^ uVar2 & 0xff) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    * 0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^
                  (ushort)((ulong)uVar8 >> 0x30) & 0xff) * 0x1000193 ^ // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (uint)(byte)((ulong)uVar8 >> 0x38); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar11 = *(float *)(lVar10 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar11 = *(float *)(lVar10 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (fVar11 < 0.15) { // [自动静态注释] 条件判断/分支
        FUN__text__0051c6f4(param_6,lVar10 + 0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar10 = *(long *)(lVar10 + 0x40); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar4 = iVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar10 != 0); // [自动静态注释] 循环/迭代
    FUN__text__0051bc80(param_7,*(undefined1 *)(param_2 + 0x6d),&uStack_61); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar4 = (**(code **)(*param_5 + 8))(param_5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    bVar3 = iVar4 != param_8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return bVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


