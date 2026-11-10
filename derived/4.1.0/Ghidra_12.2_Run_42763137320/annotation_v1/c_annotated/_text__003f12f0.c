/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002F12F0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f12f0; name: FUN_.text__003f12f0
 */


void FUN__text__003f12f0(long *param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar13; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar6 = param_1[1] - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = lVar6 * -0x71c71c71c71c71c7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0x1c71c71c71c71c7 < uVar11) { // [自动静态注释] 条件判断/分支
    FUN__text__003f1608(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Subroutine does not return */
    FUN__text__001187c0(0x71a95e); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = param_1[2] - *param_1 >> 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar7 = lVar4 * 0x1c71c71c71c71c72; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar7 <= uVar11) { // [自动静态注释] 条件判断/分支
    uVar7 = uVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (0xe38e38e38e38e2 < (ulong)(lVar4 * -0x71c71c71c71c71c7)) { // [自动静态注释] 条件判断/分支
    uVar7 = 0x1c71c71c71c71c7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (uVar7 == 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar7 * 0x90,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar11 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar11 = uVar11 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar11 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
LAB__text__003f15fc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  puVar12 = (undefined8 *)(lVar4 + lVar6 * 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar11 + 0x18 + *(long *)(uVar11 + 0x98) * 8) = param_1[3];
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  uVar8 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar12[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar12[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *puVar12 = 0;
  puVar12[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((code *)param_2[2] != (code *)0x0) { // [自动静态注释] 条件判断/分支
    (*(code *)param_2[2])(param_2 + 4,puVar12 + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12[1] = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12[3] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12[2] = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar12 = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = lVar4 + uVar7 * 0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(lVar4 + lVar6 * 0x10 + 0x80) = uVar8;
  lVar6 = *(long *)(uVar11 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar11 + 0x98) = lVar6;
  puVar10 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar1 == puVar10) { // [自动静态注释] 条件判断/分支
    lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar12 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (lVar6 == 0x10) goto LAB__text__003f15fc; // [自动静态注释] 条件判断/分支
      puVar9 = (undefined8 *)((long)puVar12 + lVar4 + -0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar11 + 0x18 + lVar6 * 8) = param_1[3];
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x80) = 0;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x78) = 0;
      *puVar9 = 0;
      *(undefined8 *)((long)puVar12 + lVar4 + -0x88) = 0;
      pcVar3 = *(code **)((long)puVar1 + lVar4 + -0x78); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        lVar6 = (long)puVar1 + lVar4 + -0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar13 = (undefined8 *)((long)puVar1 + lVar4 + -0x90); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (*pcVar3)(lVar6,(long)puVar12 + lVar4 + -0x70); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar8 = *(undefined8 *)((long)puVar1 + lVar4 + -0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)((long)puVar12 + lVar4 + -0x78) =
             *(undefined8 *)((long)puVar1 + lVar4 + -0x78);
        uVar2 = *(undefined8 *)((long)puVar1 + lVar4 + -0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar9 = *puVar13;
        *(undefined8 *)((long)puVar12 + lVar4 + -0x88) = uVar8;
        *(undefined8 *)((long)puVar12 + lVar4 + -0x80) = uVar2;
        pcVar3 = *(code **)((long)puVar1 + lVar4 + -0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
          *(undefined8 *)((long)puVar1 + lVar4 + -0x80) = 0;
          *(undefined8 *)((long)puVar1 + lVar4 + -0x78) = 0;
          *puVar13 = 0;
          *(undefined8 *)((long)puVar1 + lVar4 + -0x88) = 0;
          (*pcVar3)(lVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      lVar14 = lVar4 + -0x90; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)((long)puVar12 + lVar4 + -0x10) = *(undefined8 *)((long)puVar1 + lVar4 + -0x10)
      ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = *(long *)(uVar11 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(uVar11 + 0x98) = lVar6;
      lVar4 = lVar14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((undefined8 *)((long)puVar1 + lVar14) != puVar10); // [自动静态注释] 循环/迭代
    puVar1 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = (long)puVar12 + lVar14;
    lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[1] = (long)(puVar12 + 0x12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    param_1[2] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (puVar12 = puVar10, puVar12 != puVar1) { // [自动静态注释] 循环/迭代
      pcVar3 = (code *)puVar12[-0x11]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10 = puVar12 + -0x12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        puVar12[-0x10] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar12[-0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar10 = 0;
        puVar12[-0x11] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (*pcVar3)(puVar12 + -0xe); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x003f1598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar1,lVar6 - (long)puVar1,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


