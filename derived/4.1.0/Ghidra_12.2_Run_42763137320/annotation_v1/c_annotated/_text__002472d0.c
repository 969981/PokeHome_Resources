/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001472D0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002472d0; name: FUN_.text__002472d0
 */


ulong FUN__text__002472d0(undefined8 *param_1,long *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar7 = (undefined8 *)*param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = *param_2 - (long)puVar7 >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar5 < 6) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0024731c */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*(code *)(&UNK__text__0024732c + (ulong)*(byte *)(uVar5 + 0x72bbfa) * 4))(1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  puVar4 = puVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = param_3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar8 = puVar7 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (*(code *)*param_3)(puVar1,puVar8,puVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
    if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
      uVar3 = puVar7[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7[1] = puVar7[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7[2] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar7); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar7 = puVar7[1];
        puVar7[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar3 = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar2 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *puVar7 = puVar7[1];
      puVar7[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (*(code *)*param_3)(puVar1,puVar8,puVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
        uVar3 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar4 = *puVar8;
        *puVar8 = uVar3;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = puVar7[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar7[2] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar7 = uVar6;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (puVar7 + 3 != (undefined8 *)*param_2) { // [自动静态注释] 条件判断/分支
    iVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = puVar7 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      puVar4 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = (*(code *)*param_3)(puVar1,puVar4,puVar8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar5 & 1) != 0) { // [自动静态注释] 条件判断/分支
        local_58 = *puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          puVar7 = puVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar7[1] = *puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (puVar7 == (undefined8 *)*param_1) break; // [自动静态注释] 条件判断/分支
          uVar5 = (*(code *)*param_3)(puVar1,&local_58,puVar7 + -1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar8 = puVar7 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((uVar5 & 1) != 0); // [自动静态注释] 循环/迭代
        iVar9 = iVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar7 = local_58;
        if (iVar9 == 8) { // [自动静态注释] 条件判断/分支
          return (ulong)(puVar4 + 1 == (undefined8 *)*param_2); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      puVar7 = puVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar4 + 1 != (undefined8 *)*param_2); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


