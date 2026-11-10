/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0056BF98
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bf98; name: FUN_.text__0066bf98
 */


undefined8 * // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0066bf98(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *param_4 = 0;
    param_4[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar1 = (undefined8 *)FUN__text__0066be80(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = puVar1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((param_1 == lVar2) && (*(int *)(puVar1 + 5) == (int)param_2)) { // [自动静态注释] 条件判断/分支
      param_4[2] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_4[4] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_4[5] = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_4[3] = puVar1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 **)(puVar1[3] + 0x10) = param_4;
      goto LAB__text__0066c04c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && ((int)param_2 < *(int *)(puVar1 + 5))))) { // [自动静态注释] 条件判断/分支
      *param_4 = *puVar1;
      param_4[1] = puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar1 = 0;
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar3 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_4 = puVar1;
      param_4[1] = uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  param_4[4] = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[5] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_4[2] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0066c04c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  puVar1[3] = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return puVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


