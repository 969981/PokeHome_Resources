/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00421678
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521678; name: FUN_.text__00521678
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__00521678(double *param_1,double *param_2,long *param_3,long *param_4,float *param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   float *param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (1 < *(uint *)(param_1 + 0xc)) { // [自动静态注释] 条件判断/分支
    dVar4 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar5 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar15 = *(float *)((long)param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    dVar3 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar14 = (float)(dVar5 - param_1[1]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar13 = (float)(dVar4 - *param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar7 = (float)(dVar3 - param_1[2]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar11 = *(float *)(param_1 + 3) * fVar13 + fVar14 * *(float *)((long)param_1 + 0x1c) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             fVar7 * *(float *)(param_1 + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar10 = *(float *)((long)param_1 + 0x44); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar6 = fVar10 + fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (ABS(fVar11) <= fVar6 + fVar15) { // [自动静态注释] 条件判断/分支
      fVar17 = *(float *)((long)param_1 + 0x24) * fVar13 + fVar14 * *(float *)(param_1 + 5) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
               fVar7 * *(float *)((long)param_1 + 0x2c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      fVar18 = *(float *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (ABS(fVar17) <= fVar18 + fVar6) { // [自动静态注释] 条件判断/分支
        fVar13 = *(float *)(param_1 + 6) * fVar13 + fVar14 * *(float *)((long)param_1 + 0x34) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                 fVar7 * *(float *)(param_1 + 7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar7 = ABS(fVar13); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (fVar7 <= fVar10) { // [自动静态注释] 条件判断/分支
          fVar16 = (float)NEON_fminnm(fVar11,fVar15); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar8 = param_1[0xb3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar14 = -fVar15; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (-fVar15 <= fVar11) { // [自动静态注释] 条件判断/分支
            fVar14 = fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          fVar16 = (float)NEON_fminnm(fVar17,fVar18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar15 = -fVar18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (-fVar18 <= fVar17) { // [自动静态注释] 条件判断/分支
            fVar15 = fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          bVar1 = false; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((fVar14 == fVar11) && (bVar1 = false, !NAN(fVar15) && !NAN(fVar17))) { // [自动静态注释] 条件判断/分支
            bVar1 = fVar15 == fVar17; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          if (bVar1) { // [自动静态注释] 条件判断/分支
            dVar12 = param_1[0xb4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            dVar9 = param_1[0xb5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar6 = (fVar13 + fVar10) / fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar11 = *(float *)((long)param_1 + 0x5cc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar13 = *(float *)(param_1 + 0xb9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            fVar10 = *(float *)(param_1 + 0xba); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *param_6 = fVar7;
            if (0.0 < fVar13 * (float)(dVar4 - dVar8) + (float)(dVar5 - dVar12) * fVar11 + // [自动静态注释] 条件判断/分支
                      (float)(dVar3 - dVar9) * fVar10) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              *param_3 = *(long *)param_1[0xb];
              *param_4 = *(long *)((long)param_1[0xb] + 8);
              *param_5 = (fVar6 * 0.5 - 0.5) / (1.0 - *(float *)(param_1 + 0xb2)) + 1.0;
              return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
            } // [自动静态注释] 作用域/控制流边界
            *param_3 = ((long *)param_1[0xb])[1];
            *param_4 = *(long *)param_1[0xb];
            *param_5 = (fVar6 * -0.5) / *(float *)(param_1 + 0xb2) + 1.0;
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          lVar2 = *(long *)param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          dVar4 = dVar4 - (dVar8 + (double)(*(float *)(param_1 + 0xb6) * fVar14) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (double)(*(float *)((long)param_1 + 0x5bc) * fVar15)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          dVar5 = dVar5 - (param_1[0xb4] + (double)(*(float *)((long)param_1 + 0x5b4) * fVar14) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (double)(*(float *)(param_1 + 0xb8) * fVar15)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          dVar3 = dVar3 - (param_1[0xb5] + (double)(*(float *)(param_1 + 0xb7) * fVar14) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                          (double)(*(float *)((long)param_1 + 0x5c4) * fVar15)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar7 = 1.0 - *(float *)(param_1 + 0xb2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar2 != *param_3) { // [自动静态注释] 条件判断/分支
            fVar7 = *(float *)(param_1 + 0xb2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          fVar10 = (float)SQRT(dVar4 * dVar4 + dVar5 * dVar5 + dVar3 * dVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (fVar10 < fVar7 * fVar6) { // [自动静态注释] 条件判断/分支
            *param_4 = ((long *)param_1[0xb])[lVar2 == *param_3];
            *param_6 = fVar10;
            *param_5 = (fVar10 * 0.5) / (fVar7 * fVar6) + 0.5;
            return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


