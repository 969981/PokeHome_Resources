/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005922C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006922c8; name: FUN_.text__006922c8
 */


long FUN__text__006922c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if ((*(char *)(lVar1 + 0x39) != '\x01') && // [自动静态注释] 条件判断/分支
     ((*(long *)(lVar1 + 0x20) == 0 || (*(char *)(*(long *)(lVar1 + 0x20) + 0x39) != '\x01')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(bool *)(param_1 + 0x39) = *(char *)(param_1 + 0x39) == '\0';
    *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
    *(bool *)(*(long *)(param_1 + 0x28) + 0x39) =
         *(char *)(*(long *)(param_1 + 0x28) + 0x39) == '\0';
    lVar2 = *(long *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = *(long *)(lVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
      *(long *)(lVar1 + 0x28) = lVar2;
      *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(lVar2 + 0x39);
      *(undefined1 *)(lVar2 + 0x39) = 1;
      *(long *)(param_1 + 0x28) = lVar1;
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar1 + 0x20);
      *(long *)(lVar1 + 0x20) = param_1;
      *(undefined1 *)(lVar1 + 0x39) = *(undefined1 *)(param_1 + 0x39);
      *(undefined1 *)(param_1 + 0x39) = 1;
      *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x20) + 0x39) = *(char *)(*(long *)(lVar1 + 0x20) + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x28) + 0x39) = *(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\0';
      lVar2 = FUN__text__006922c8(*(undefined8 *)(lVar1 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)(lVar1 + 0x20) = lVar2;
      goto joined_r0x006923e4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__006922c8(*(undefined8 *)(param_1 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = *(long *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x20) = lVar2;
  lVar1 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x006923e4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(lVar3 + 0x20);
    *(long *)(lVar3 + 0x20) = lVar1;
    *(undefined1 *)(lVar3 + 0x39) = *(undefined1 *)(lVar1 + 0x39);
    *(undefined1 *)(lVar1 + 0x39) = 1;
    lVar2 = *(long *)(lVar3 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(char *)(lVar2 + 0x39) != '\x01') { // [自动静态注释] 条件判断/分支
      return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(long *)(lVar2 + 0x20) == 0) || (*(char *)(*(long *)(lVar2 + 0x20) + 0x39) != '\x01')) { // [自动静态注释] 条件判断/分支
      lVar3 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x28);
      *(long *)(lVar2 + 0x28) = lVar1;
      *(undefined1 *)(lVar2 + 0x39) = *(undefined1 *)(lVar1 + 0x39);
      *(undefined1 *)(lVar1 + 0x39) = 1;
      lVar3 = *(long *)(lVar2 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
        return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      lVar1 = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(char *)(lVar3 + 0x39) != '\x01') { // [自动静态注释] 条件判断/分支
        return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if ((*(long *)(lVar1 + 0x28) != 0) && (*(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\x01')) { // [自动静态注释] 条件判断/分支
      *(bool *)(lVar1 + 0x39) = *(char *)(lVar1 + 0x39) == '\0';
      *(bool *)(lVar3 + 0x39) = *(char *)(lVar3 + 0x39) == '\0';
      *(bool *)(*(long *)(lVar1 + 0x28) + 0x39) = *(char *)(*(long *)(lVar1 + 0x28) + 0x39) == '\0';
      return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return lVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


