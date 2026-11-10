/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0042BCE0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052bce0; name: FUN_.text__0052bce0
 */


void FUN__text__0052bce0(long param_1,long param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  double *pdVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double dStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  double local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar2 = *(int *)(param_1 + 0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = *(long *)(param_1 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_2 + 0x58) != -1 && lVar4 != *(long *)(param_2 + 0x58)) { // [自动静态注释] 条件判断/分支
    uVar6 = NEON_fminnm(*(undefined4 *)(param_1 + 0x110),*(float *)(param_2 + 0x98) * 100.0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(param_1 + 0x110) = uVar6;
  } // [自动静态注释] 作用域/控制流边界
  if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(param_3 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *(long *)(param_1 + (ulong)(iVar2 - 1) * 8 + 0x178); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar5 = *(long *)(param_3 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if ((lVar5 != -1) && (lVar4 != lVar5)) { // [自动静态注释] 条件判断/分支
    uVar3 = FUN__text__00506a00(); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = FUN__text__0050c360(uVar3,*(undefined8 *)(param_3 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      pdVar1 = (double *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(int *)(param_1 + 0xf8) != 0) { // [自动静态注释] 条件判断/分支
        pdVar1 = (double *)(param_1 + (ulong)(*(int *)(param_1 + 0xf8) - 1) * 0x18 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      fVar7 = (float)(*pdVar1 - *(double *)(param_1 + 0xe0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar8 = (float)(pdVar1[1] - *(double *)(param_1 + 0xe8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar9 = (float)(pdVar1[2] - *(double *)(param_1 + 0xf0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (0.0 < fVar10) { // [自动静态注释] 条件判断/分支
        fVar10 = *(float *)(param_1 + 0x100) / fVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_38 = *(double *)(param_1 + 0xe0) + (double)(fVar10 * fVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        dStack_30 = *(double *)(param_1 + 0xe8) + (double)(fVar10 * fVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        local_28 = *(double *)(param_1 + 0xf0) + (double)(fVar10 * fVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar7 = (float)FUN__text__00521144(lVar4,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
        fVar8 = *(float *)(param_3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = NEON_fminnm(*(undefined4 *)(param_1 + 0x110), // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                            fVar8 * 200.0 + -100.0 + (2.0 - (fVar8 + fVar8)) * fVar7 * 15.915494); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(undefined4 *)(param_1 + 0x110) = uVar6;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


