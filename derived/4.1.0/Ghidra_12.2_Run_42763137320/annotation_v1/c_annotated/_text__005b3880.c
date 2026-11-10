/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B3880
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3880; name: FUN_.text__005b3880
 */


void FUN__text__005b3880(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__005b39e0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[8] == 0) { // [自动静态注释] 条件判断/分支
    puVar5 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar6 = (undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = param_1[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar5 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar4 != 0) && (uVar4 % 0x38 != 0)) { // [自动静态注释] 条件判断/分支
      puVar6 = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar6 = puVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar6 <= puVar5 + uVar4 / 0x38); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    puVar6 = (undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = uVar4 + param_1[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = ((long)puVar6 - (long)puVar5) * 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar4 != uVar1) { // [自动静态注释] 条件判断/分支
      uVar4 = uVar4 / 0x38; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (uVar4 <= uVar1 / 0x38 && uVar1 % 0x38 != 0) { // [自动静态注释] 条件判断/分支
        puVar3 = puVar5 + uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          puVar3 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (puVar3 <= puVar5 + uVar1 / 0x38); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (puVar5 != puVar6) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      puVar3 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*(long *)param_1[9] + 0x18))((long *)param_1[9],*puVar5,0xfc0,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      puVar5 = puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != puVar6); // [自动静态注释] 循环/迭代
    puVar6 = (undefined8 *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  puVar5 = (undefined8 *)param_1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar5 != puVar6) { // [自动静态注释] 条件判断/分支
    param_1[2] = (long)puVar5 + ((long)puVar6 + (7 - (long)puVar5) & 0xfffffffffffffff8U); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x005b39c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[4] + 0x18))((long *)param_1[4],lVar2,param_1[3] - lVar2,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


