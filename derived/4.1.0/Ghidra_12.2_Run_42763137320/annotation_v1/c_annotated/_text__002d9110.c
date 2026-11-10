/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001D9110
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9110; name: FUN_.text__002d9110
 */


void FUN__text__002d9110(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__002d9300(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x10] == 0) { // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar8 = (undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = param_1[0xe]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar7 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar6 != 0) && (uVar6 % 0x19 != 0)) { // [自动静态注释] 条件判断/分支
      puVar8 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar8 = puVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar8 <= puVar7 + uVar6 / 0x19); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar8 = (undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = uVar6 + param_1[0x10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = ((long)puVar8 - (long)puVar7 >> 3) * 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar6 != uVar4) { // [自动静态注释] 条件判断/分支
      uVar6 = uVar6 / 0x19; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar6 <= uVar4 / 0x19 && uVar4 % 0x19 != 0) { // [自动静态注释] 条件判断/分支
        puVar5 = puVar7 + uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          puVar5 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar5 <= puVar7 + uVar4 / 0x19); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) { // [自动静态注释] 循环/迭代
    (**(code **)(*(long *)param_1[0x12] + 0x18))((long *)param_1[0x12],*puVar7,4000,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar1 = (long *)param_1[0x18]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar2 = param_1 + 0x14; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar1 == plVar2) { // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)(*plVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (plVar1 == (long *)0x0) goto LAB__text__002d9258; // [自动静态注释] 条件判断/分支
    puVar7 = (undefined8 *)(*plVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar2 = plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  (*(code *)*puVar7)(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__002d9258: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != param_1[1]) { // [自动静态注释] 条件判断/分支
    param_1[2] = lVar3 + ((param_1[1] - lVar3) + 7U & 0xfffffffffffffff8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],lVar3,param_1[4] - lVar3,0x10); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  plVar2 = (long *)param_1[0xc]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1 = param_1 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar2 == param_1) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x002d92e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (plVar2 == (long *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x002d92c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


