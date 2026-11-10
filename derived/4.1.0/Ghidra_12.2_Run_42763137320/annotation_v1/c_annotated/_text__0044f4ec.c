/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034F4EC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f4ec; name: FUN_.text__0044f4ec
 */


void FUN__text__0044f4ec(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x110) == 0 && *(int *)(param_1 + 0x114) == 2) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(lVar2 + 0x2f4) = 0;
      *(uint *)(lVar2 + 0x2fb) = *(uint *)(lVar2 + 0x2fb) & 0xfe3fffff;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if ((*(long *)(param_1 + 0xe0) != 0) && // [自动静态注释] 条件判断/分支
          ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) & 1) != 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar3 = (long *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar3 + 0x18))(plVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__004590a0(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = (**(code **)(*plVar3 + 0x38))(plVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
      if (*(long *)(param_1 + 0xe0) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004286a0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)(param_1 + 0xf8) = 2;
      *(undefined4 *)(param_1 + 300) = 0x11;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


