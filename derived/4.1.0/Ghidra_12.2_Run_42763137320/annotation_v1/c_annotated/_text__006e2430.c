/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E2430
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2430; name: FUN_.text__006e2430
 */


void FUN__text__006e2430(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_2 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)(param_2 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((lVar2 == 0) && (*(long *)(param_2 + 0x1d8) == 0)) && (*(char *)(param_2 + 0xf) != '\0')) { // [自动静态注释] 条件判断/分支
    lVar2 = param_1 + (long)*(int *)(param_2 + 0x14) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(lVar2 + 0x4b0) == param_2) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + 0x4b0) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *(long *)(param_1 + lVar2 * 8 + 0x4b0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        lVar2 = (long)*(int *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      param_1 = param_1 + lVar2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_1 + 0x6b0) == param_2) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(param_1 + 0x6b0) = 0;
        *(undefined1 *)(param_2 + 0xf) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined1 *)(param_2 + 0xf) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar2 + 0x6b0) == param_2) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + 0x6b0) = 0;
      lVar2 = *(long *)(param_2 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(param_2 + 0x1d0) != 0) { // [自动静态注释] 条件判断/分支
        *(long *)(*(long *)(param_2 + 0x1d0) + 0x1d8) = lVar2;
        lVar2 = *(long *)(param_2 + 0x1d8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(lVar2 + 0x1d0) = *puVar1;
        *(undefined1 *)(param_2 + 0xf) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x1d8) = 0;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006d8380(0x71228c); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined1 *)(param_2 + 0xf) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x1d8) = 0;
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = param_1 + (long)*(int *)(param_2 + 0x14) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(lVar3 + 0xb0) == param_2) { // [自动静态注释] 条件判断/分支
    *(long *)(lVar3 + 0xb0) = lVar2;
    lVar2 = (long)*(int *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = *(long *)(param_1 + lVar2 * 8 + 0xb0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar3 + 0x1d8) = 0;
      lVar2 = (long)*(int *)(param_2 + 0x14); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_1 = param_1 + lVar2 * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x2b0) == param_2) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (*(long *)(lVar3 + 0x2b0) == param_2) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar3 + 0x2b0) = *(undefined8 *)(param_2 + 0x1d8);
      lVar2 = *(long *)(param_2 + 0x1d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + 0x1d8) = *(undefined8 *)(param_2 + 0x1d8);
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_2 + 0x1d8) == 0) { // [自动静态注释] 条件判断/分支
      FUN__text__006d8380(0x71228c); // [自动静态注释] 调用尚未恢复正式名称的函数
      *puVar1 = 0;
      *(undefined8 *)(param_2 + 0x1d8) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(*(long *)(param_2 + 0x1d8) + 0x1d0) = *puVar1;
  } // [自动静态注释] 作用域/控制流边界
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x1d8) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


