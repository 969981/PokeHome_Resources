/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001B2FD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b2fd0; name: FUN_.text__002b2fd0
 */


void FUN__text__002b2fd0(long *param_1,ulong param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_2 <= (ulong)(param_1[2] - *param_1 >> 7)) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 >> 0x39 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__002b2784(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
                    /* WARNING: Does not return */
    pcVar3 = (code *)UndefinedInstructionException(0,0x2b31e8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (*pcVar3)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = param_1[1] - *param_1 >> 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 << 7,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[3] + 0xb8))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar7 = (undefined8 *)(lVar6 * 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = param_2 * 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5 == puVar8) goto LAB__text__002b31b0; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar7 = (undefined8 *)(lVar1 + lVar6 * 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = lVar1 + param_2 * 0x80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (puVar5 == puVar8) { // [自动静态注释] 条件判断/分支
LAB__text__002b31b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = (long)puVar7;
      param_1[1] = (long)puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x002b31bc; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar9 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = uVar9 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = *(long *)(uVar9 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar10 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar6 == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    puVar11 = puVar10 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar12 = puVar5 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)((uVar9 | 0x18) + lVar6 * 8) = param_1[3];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    puVar10[-0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10[-0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar11 = 0;
    puVar10[-0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((code *)puVar5[-0xd] != (code *)0x0) { // [自动静态注释] 条件判断/分支
      (*(code *)puVar5[-0xd])(puVar5 + -0xc,puVar10 + -0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = puVar5[-0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10[-0xd] = puVar5[-0xd]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = puVar5[-0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar11 = *puVar12;
      puVar10[-0xf] = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar10[-0xe] = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      pcVar3 = (code *)puVar5[-0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
        puVar5[-0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5[-0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar12 = 0;
        puVar5[-0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (*pcVar3)(puVar5 + -0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar6 = *(long *)(uVar9 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(uVar9 + 0x98) = lVar6;
    puVar5 = puVar12; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar10 = puVar11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (puVar12 != puVar8); // [自动静态注释] 循环/迭代
  puVar5 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar6 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = (long)puVar11;
  param_1[1] = (long)puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[2] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (puVar7 = puVar8, puVar7 != puVar5) { // [自动静态注释] 循环/迭代
    pcVar3 = (code *)puVar7[-0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = puVar7 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      puVar7[-0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7[-0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar8 = 0;
      puVar7[-0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (*pcVar3)(puVar7 + -0xc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
joined_r0x002b31bc: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (puVar5 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002b3154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],puVar5,lVar6 - (long)puVar5,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


