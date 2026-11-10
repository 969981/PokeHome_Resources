/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E5550
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e5550; name: FUN_.text__006e5550
 */


undefined8 FUN__text__006e5550(float *param_1,float *param_2,float *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  fVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) { // [自动静态注释] 条件判断/分支
    if (fVar3 <= fVar2) goto LAB__text__006e5570; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else if (fVar2 <= fVar3) { // [自动静态注释] 条件判断/分支
LAB__text__006e5570: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0.0 <= fVar2) || (0.0 <= fVar3)) { // [自动静态注释] 条件判断/分支
      if (fVar2 <= fVar3) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (fVar3 <= fVar2) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(undefined8 *)param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    fVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    fVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((0.0 <= fVar2) || (0.0 <= fVar3)) { // [自动静态注释] 条件判断/分支
      if (fVar3 <= fVar2) { // [自动静态注释] 条件判断/分支
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (fVar2 <= fVar3) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  fVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((0.0 <= fVar2) || (0.0 <= fVar3)) { // [自动静态注释] 条件判断/分支
    if (fVar3 < fVar2) goto LAB__text__006e5630; // [自动静态注释] 条件判断/分支
  } // [自动静态注释] 作用域/控制流边界
  else if (fVar2 < fVar3) { // [自动静态注释] 条件判断/分支
LAB__text__006e5630: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar1 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)param_1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = *(undefined8 *)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar1;
  fVar2 = (float)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  fVar3 = *param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((0.0 <= fVar3) || (0.0 <= fVar2)) { // [自动静态注释] 条件判断/分支
    if (fVar2 <= fVar3) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (fVar3 <= fVar2) { // [自动静态注释] 条件判断/分支
    return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar1;
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


