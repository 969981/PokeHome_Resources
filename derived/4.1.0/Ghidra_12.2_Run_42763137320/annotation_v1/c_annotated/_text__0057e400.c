/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0047E400
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e400; name: FUN_.text__0057e400
 */


void FUN__text__0057e400(int *param_1,undefined1 (*param_2) [12],uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar2 [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 (*pauVar3) [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 (*pauVar4) [12]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar15; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    iVar5 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pauVar4 = (undefined1 (*) [12])(*(long *)(param_1 + 2) + (ulong)(uint)(iVar5 << 1) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar1 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uint)(iVar6 - iVar5) <= param_3) { // [自动静态注释] 条件判断/分支
        uVar1 = iVar6 - iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      param_1[4] = uVar1 + iVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar1 < 4) { // [自动静态注释] 条件判断/分支
        pauVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (uVar1 != 0) goto LAB__text__0057e498; // [自动静态注释] 条件判断/分支
LAB__text__0057e510: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        iVar5 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar5 == iVar6) { // [自动静态注释] 条件判断/分支
LAB__text__0057e520: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          pauVar4 = *(undefined1 (**) [12])(param_1 + 2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar7 = uVar1 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        fVar8 = (float)param_1[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pauVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar7 = uVar7 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar11 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          auVar2 = *pauVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar9 = (float)*(undefined8 *)*pauVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar10 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar12 = SUB124(*pauVar4,0) + (fVar9 - SUB124(*pauVar4,4)) * fVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar13 = SUB124(*pauVar4,8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (fVar10 - (float)((ulong)*(undefined8 *)(*pauVar4 + 8) >> 0x20)) * fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar14 = (float)*(undefined8 *)(pauVar4[1] + 4) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   ((float)*(undefined8 *)(*pauVar3 + 8) - // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   (float)((ulong)*(undefined8 *)(pauVar4[1] + 4) >> 0x20)) * fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          fVar15 = (float)*(undefined8 *)pauVar4[2] + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                   (fVar11 - (float)((ulong)*(undefined8 *)pauVar4[2] >> 0x20)) * fVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          param_2 = (undefined1 (*) [12])(pauVar3[1] + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(ulong *)(*pauVar3 + 8) = CONCAT44(fVar15,fVar14);
          *(ulong *)*pauVar3 = CONCAT44(fVar13,fVar12);
          *(float *)*pauVar4 = fVar9;
          *(float *)(*pauVar4 + 4) = fVar12;
          *(float *)(*pauVar4 + 8) = fVar10;
          *(float *)pauVar4[1] = fVar13;
          *(ulong *)pauVar4[2] = CONCAT44(fVar15,fVar11);
          *(ulong *)(pauVar4[1] + 4) = CONCAT44(fVar14,auVar2._8_4_);
          pauVar4 = (undefined1 (*) [12])(pauVar4[2] + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pauVar3 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (uVar7 != 0); // [自动静态注释] 循环/迭代
        uVar7 = uVar1 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if ((uVar1 & 3) == 0) goto LAB__text__0057e510; // [自动静态注释] 条件判断/分支
LAB__text__0057e498: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        fVar8 = *(float *)*pauVar4 + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (*(float *)*pauVar3 - *(float *)(*pauVar4 + 4)) * (float)param_1[5]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(float *)*pauVar4 = *(float *)*pauVar3;
        *(float *)(*pauVar4 + 4) = fVar8;
        param_2 = (undefined1 (*) [12])(*pauVar3 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(float *)*pauVar3 = fVar8;
        if (uVar7 == 1) { // [自动静态注释] 条件判断/分支
          pauVar4 = (undefined1 (*) [12])(*pauVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar5 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          iVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (iVar5 != iVar6) goto LAB__text__0057e420; // [自动静态注释] 条件判断/分支
          goto LAB__text__0057e520; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        fVar8 = *(float *)(*pauVar4 + 8) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (*(float *)(*pauVar3 + 4) - *(float *)pauVar4[1]) * (float)param_1[5]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(float *)(*pauVar4 + 8) = *(float *)(*pauVar3 + 4);
        *(float *)pauVar4[1] = fVar8;
        *(float *)(*pauVar3 + 4) = fVar8;
        if (uVar7 == 2) { // [自动静态注释] 条件判断/分支
          param_2 = (undefined1 (*) [12])(*pauVar3 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          pauVar4 = (undefined1 (*) [12])(pauVar4[1] + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__0057e510; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        fVar8 = *(float *)(pauVar4[1] + 4) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (*(float *)(*pauVar3 + 8) - *(float *)(pauVar4[1] + 8)) * (float)param_1[5]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(float *)(pauVar4[1] + 4) = *(float *)(*pauVar3 + 8);
        *(float *)(pauVar4[1] + 8) = fVar8;
        *(float *)(*pauVar3 + 8) = fVar8;
        param_2 = pauVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        pauVar4 = pauVar4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar5 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (iVar5 == iVar6) goto LAB__text__0057e520; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0057e420: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      param_3 = param_3 - uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (param_3 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


