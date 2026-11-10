/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B4C20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b4c20; name: FUN_.text__005b4c20
 */


void FUN__text__005b4c20(long *param_1,long *param_2,long *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == param_1) { // [自动静态注释] 条件判断/分支
LAB__text__005b4ef0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar2 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (param_2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      plVar2 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((param_2 != (long *)0x0) && ((int)param_2[3] != 1)) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_2 + 3) = 1;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = (long *)plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (param_2 != plVar3) { // [自动静态注释] 条件判断/分支
        if ((int)plVar3[3] == 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar3 + 3) = 1;
          plVar5 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined4 *)(plVar2 + 3) = 0;
          puVar8 = (undefined8 *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar2[1] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar8 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            *puVar8 = plVar2;
          } // [自动静态注释] 作用域/控制流边界
          plVar3[2] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar4 != plVar2) { // [自动静态注释] 条件判断/分支
            lVar7 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *plVar2 = (long)plVar3;
          lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar5 != param_1) { // [自动静态注释] 条件判断/分支
            lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *plVar3 = (long)plVar5;
          *(long **)((long)plVar5 + lVar1) = plVar3;
          plVar3 = (long *)plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar7 = plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = (undefined8 *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar8 == (undefined8 *)0x0) goto LAB__text__005b4d08; // [自动静态注释] 条件判断/分支
LAB__text__005b4cfc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if (*(int *)(puVar8 + 3) == 1) goto LAB__text__005b4d08; // [自动静态注释] 条件判断/分支
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) { // [自动静态注释] 条件判断/分支
            *(undefined4 *)(puVar8 + 3) = 1;
            *(undefined4 *)(plVar3 + 3) = 0;
            plVar5 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar6 = (undefined8 *)puVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            plVar3[2] = (long)puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
              *puVar6 = plVar3;
            } // [自动静态注释] 作用域/控制流边界
            puVar8[1] = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *plVar3 = (long)puVar8;
            lVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
              lVar7 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            if (plVar5 != param_1) { // [自动静态注释] 条件判断/分支
              lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            } // [自动静态注释] 作用域/控制流边界
            *puVar8 = plVar5;
            *(undefined8 **)((long)plVar5 + lVar1) = puVar8;
            plVar3 = (long *)plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          lVar7 = plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = (undefined8 *)plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar8 != (undefined8 *)0x0) goto LAB__text__005b4cfc; // [自动静态注释] 条件判断/分支
LAB__text__005b4d08: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) goto LAB__text__005b4c40; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        *(int *)(plVar3 + 3) = (int)plVar2[3];
        *(undefined4 *)(plVar2 + 3) = 1;
        if (plVar3[1] != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar3[1] + 0x18) = 1;
        } // [自动静态注释] 作用域/控制流边界
        plVar3 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8 = (undefined8 *)plVar2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = (undefined8 *)puVar8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2[1] = (long)puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          *puVar6 = plVar2;
        } // [自动静态注释] 作用域/控制流边界
        puVar8[2] = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__005b4ecc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *plVar2 = (long)puVar8;
        lVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar5 != plVar2) { // [自动静态注释] 条件判断/分支
          lVar7 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *puVar8 = plVar3;
        lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar3 != param_1) { // [自动静态注释] 条件判断/分支
          lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 **)((long)plVar3 + lVar1) = puVar8;
        goto LAB__text__005b4ef0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar3 = (long *)plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((int)plVar3[3] == 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(plVar3 + 3) = 1;
        plVar5 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(plVar2 + 3) = 0;
        puVar8 = (undefined8 *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2[2] = (long)puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar8 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          *puVar8 = plVar2;
        } // [自动静态注释] 作用域/控制流边界
        plVar3[1] = (long)plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar4 != plVar2) { // [自动静态注释] 条件判断/分支
          lVar7 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar2 = (long)plVar3;
        lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (plVar5 != param_1) { // [自动静态注释] 条件判断/分支
          lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        *plVar3 = (long)plVar5;
        *(long **)((long)plVar5 + lVar1) = plVar3;
        plVar3 = (long *)plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar8 = (undefined8 *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar7 = plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar8 == (undefined8 *)0x0) goto LAB__text__005b4d74; // [自动静态注释] 条件判断/分支
LAB__text__005b4d68: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(int *)(puVar8 + 3) == 1) goto LAB__text__005b4d74; // [自动静态注释] 条件判断/分支
        if ((lVar7 == 0) || (*(int *)(lVar7 + 0x18) == 1)) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(puVar8 + 3) = 1;
          *(undefined4 *)(plVar3 + 3) = 0;
          plVar5 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar6 = (undefined8 *)puVar8[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar4 = (long *)plVar5[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar3[1] = (long)puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            *puVar6 = plVar3;
          } // [自动静态注释] 作用域/控制流边界
          puVar8[2] = plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *plVar3 = (long)puVar8;
          lVar7 = 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
            lVar7 = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          lVar1 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (plVar5 != param_1) { // [自动静态注释] 条件判断/分支
            lVar1 = lVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *puVar8 = plVar5;
          *(undefined8 **)((long)plVar5 + lVar1) = puVar8;
          plVar3 = (long *)plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
LAB__text__005b4e90: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        *(int *)(plVar3 + 3) = (int)plVar2[3];
        *(undefined4 *)(plVar2 + 3) = 1;
        if (plVar3[2] != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(plVar3[2] + 0x18) = 1;
        } // [自动静态注释] 作用域/控制流边界
        puVar8 = (undefined8 *)plVar2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar3 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar6 = (undefined8 *)puVar8[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2[2] = (long)puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar6 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          *puVar6 = plVar2;
        } // [自动静态注释] 作用域/控制流边界
        puVar8[1] = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto LAB__text__005b4ecc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      puVar8 = (undefined8 *)plVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar7 = plVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar8 != (undefined8 *)0x0) goto LAB__text__005b4d68; // [自动静态注释] 条件判断/分支
LAB__text__005b4d74: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 1)) goto LAB__text__005b4e90; // [自动静态注释] 条件判断/分支
LAB__text__005b4c40: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(plVar3 + 3) = 0;
      param_2 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_3 = (long *)*plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((long *)*plVar2 != param_1); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(plVar2 + 3) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


