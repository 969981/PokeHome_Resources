/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002EB470
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb470; name: FUN_.text__003eb470
 */


void FUN__text__003eb470(long param_1,long param_2,byte param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 2) != '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = FUN__text__00699b8c(param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_2 + 0x18) + 0x98)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              (*(long **)(param_2 + 0x18),*(undefined8 *)(param_1 + 8),1,param_3 & 1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar2 = FUN__text__00699ba4(param_1 + 0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = (ulong)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = FUN__text__0069e6c0(*(undefined8 *)(param_2 + 0x20),lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__006c0e30(*(undefined8 *)(param_1 + 8),lVar3,param_3 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      lVar2 = lVar2 + 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = uVar4 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 != 0); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *(byte *)(param_1 + 3) = param_3 & 1;
  *(long *)(param_1 + 0x38) = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


