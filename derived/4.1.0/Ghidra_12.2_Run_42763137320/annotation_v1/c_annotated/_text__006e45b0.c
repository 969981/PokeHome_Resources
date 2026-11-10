/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E45B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e45b0; name: FUN_.text__006e45b0
 */


float * FUN__text__006e45b0(float *param_1,float *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  float fVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float *pfVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar2 = param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar5 = param_2 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar7 = *pfVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pfVar4 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (fVar1 < fVar7) { // [自动静态注释] 条件判断/分支
LAB__text__006e4614: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    while( true ) { // [自动静态注释] 循环/迭代
      pfVar3 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4 = pfVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 <= pfVar4) break; // [自动静态注释] 条件判断/分支
      if ((*pfVar4 <= fVar1) && ((*pfVar4 < fVar1 || ((int)fVar2 < (int)pfVar3[3])))) break; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (fVar1 <= fVar7) { // [自动静态注释] 条件判断/分支
      if ((int)param_2[-1] <= (int)fVar2) goto LAB__text__006e4614; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    do { // [自动静态注释] 循环/迭代
      do { // [自动静态注释] 循环/迭代
        pfVar3 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar4 = pfVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (fVar1 < *pfVar4); // [自动静态注释] 循环/迭代
    } while ((fVar1 <= *pfVar4) && ((int)pfVar3[3] <= (int)fVar2)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  if ((pfVar4 < param_2) && (param_2 = pfVar5, fVar7 <= fVar1)) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      if ((fVar1 <= fVar7) && ((int)param_2[1] <= (int)fVar2)) break; // [自动静态注释] 条件判断/分支
      param_2 = param_2 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      fVar7 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (fVar7 <= fVar1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    if (param_2 <= pfVar4) { // [自动静态注释] 条件判断/分支
      if (pfVar4 + -2 != param_1) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)param_1 = *(undefined8 *)(pfVar4 + -2);
      } // [自动静态注释] 作用域/控制流边界
      pfVar4[-2] = fVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pfVar4[-1] = fVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      return pfVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = *(undefined8 *)pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)pfVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar6;
    do { // [自动静态注释] 循环/迭代
      do { // [自动静态注释] 循环/迭代
        pfVar5 = pfVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pfVar4 = pfVar5 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (fVar1 < *pfVar4); // [自动静态注释] 循环/迭代
      if (*pfVar4 < fVar1) break; // [自动静态注释] 条件判断/分支
    } while ((int)pfVar5[3] <= (int)fVar2); // [自动静态注释] 循环/迭代
    do { // [自动静态注释] 循环/迭代
      pfVar5 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2 = pfVar5 + -2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (fVar1 < *param_2) break; // [自动静态注释] 条件判断/分支
    } while ((*param_2 < fVar1) || ((int)fVar2 < (int)pfVar5[-1])); // [自动静态注释] 循环/迭代
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


