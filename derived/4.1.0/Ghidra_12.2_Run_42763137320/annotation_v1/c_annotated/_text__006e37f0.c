/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E37F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e37f0; name: FUN_.text__006e37f0
 */


ulong FUN__text__006e37f0(float *param_1,float *param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (long)param_2 - (long)param_1 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x006e3828 */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&UNK__text__006e3838 + (ulong)*(byte *)(uVar2 + 0x76693c) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006e3430(param_1,param_1 + 2,param_1 + 4,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1 + 6 != param_2) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar8 = param_1 + 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pfVar9 = param_1 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      pfVar3 = pfVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar10 = *pfVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar10 <= *pfVar9) { // [自动静态注释] 条件判断/分支
        if (*pfVar9 <= fVar10) { // [自动静态注释] 条件判断/分支
          fVar6 = pfVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if ((int)pfVar9[1] <= (int)fVar6) goto LAB__text__006e3890; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar6 = pfVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)pfVar3 = *(undefined8 *)pfVar9;
        pfVar8 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pfVar9 != param_1) { // [自动静态注释] 条件判断/分支
          lVar7 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            fVar11 = *(float *)((long)param_1 + lVar7 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pfVar8 = pfVar9; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (fVar11 < fVar10) goto LAB__text__006e387c; // [自动静态注释] 条件判断/分支
            if ((fVar11 == fVar10) && (*(int *)((long)param_1 + lVar7 + 0xc) <= (int)fVar6)) { // [自动静态注释] 条件判断/分支
              pfVar8 = (float *)((long)param_1 + lVar7 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
              goto LAB__text__006e387c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            } // [自动静态注释] 作用域/控制流边界
            bVar1 = lVar7 != -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)((long)param_1 + lVar7 + 0x10) =
                 *(undefined8 *)((long)param_1 + lVar7 + 8);
            lVar7 = lVar7 + -8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            pfVar9 = pfVar9 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (bVar1); // [自动静态注释] 循环/迭代
          pfVar8 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
LAB__text__006e387c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar5 = iVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *pfVar8 = fVar10;
        pfVar8[1] = fVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar5 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(pfVar3 + 2 == param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
LAB__text__006e3890: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = lVar4 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar8 = pfVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar9 = pfVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (pfVar3 + 2 != param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


