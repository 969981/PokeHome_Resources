/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0041ED40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051ed40; name: FUN_.text__0051ed40
 */


undefined8 FUN__text__0051ed40(long param_1,undefined8 param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double *pdVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar16; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar17; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar3 = FUN__text__0050f10c(*(undefined8 *)(param_1 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = *(uint *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = uVar3 & 0xffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar3 / uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    for (plVar4 = *(long **)(*(long *)(param_1 + 0x60) + (ulong)(uVar3 - uVar2 * uVar1) * 8); // [自动静态注释] 循环/迭代
        plVar4 != (long *)0x0; plVar4 = (long *)plVar4[2]) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(uint *)(plVar4 + 3) == uVar3) { // [自动静态注释] 条件判断/分支
        if (*(uint *)(plVar4 + 1) == 0) { // [自动静态注释] 条件判断/分支
          return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        lVar5 = (ulong)*(uint *)(plVar4 + 1) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar8 = *(float *)(param_1 + 0x3c) * param_3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar15 = *(float *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar13 = *(float *)(param_1 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar7 = *(float *)(param_1 + 0x38) * *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar9 = *(float *)(param_1 + 0x40) * param_3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar10 = *(float *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar12 = *(float *)(param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar16 = fVar13 * fVar7 + fVar8 * fVar10 + fVar9 * fVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar17 = fVar15 * fVar15 - (fVar13 * fVar13 + fVar10 * fVar10 + fVar12 * fVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar14 = (fVar10 * fVar9 - fVar12 * fVar8) * fVar15 + fVar13 * fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar11 = (fVar12 * fVar7 - fVar9 * fVar13) * fVar15 + fVar10 * fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar10 = (fVar13 * fVar8 - fVar10 * fVar7) * fVar15 + fVar12 * fVar16; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while( true ) { // [自动静态注释] 循环/迭代
          pdVar6 = (double *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar13 = (float)((*(double *)(param_1 + 0x28) + (double)(fVar11 + fVar11 + fVar8 * fVar17) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ) - pdVar6[1]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar12 = (float)((*(double *)(param_1 + 0x20) + (double)(fVar14 + fVar14 + fVar7 * fVar17) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ) - *pdVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar15 = (float)((*(double *)(param_1 + 0x30) + (double)(fVar10 + fVar10 + fVar9 * fVar17) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                           ) - pdVar6[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (((ABS(*(float *)(pdVar6 + 3) * fVar12 + fVar13 * *(float *)((long)pdVar6 + 0x1c) + // [自动静态注释] 条件判断/分支
                    fVar15 * *(float *)(pdVar6 + 4)) <= *(float *)((long)pdVar6 + 0x3c)) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (ABS(*(float *)((long)pdVar6 + 0x24) * fVar12 + fVar13 * *(float *)(pdVar6 + 5) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   fVar15 * *(float *)((long)pdVar6 + 0x2c)) <= *(float *)(pdVar6 + 8))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (ABS(*(float *)(pdVar6 + 6) * fVar12 + fVar13 * *(float *)((long)pdVar6 + 0x34) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  fVar15 * *(float *)(pdVar6 + 7)) <= *(float *)((long)pdVar6 + 0x44))) break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          plVar4 = plVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar5 = lVar5 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
            return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


