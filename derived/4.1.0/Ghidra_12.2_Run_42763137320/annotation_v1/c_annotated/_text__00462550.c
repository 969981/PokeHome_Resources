/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00362550
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00462550; name: FUN_.text__00462550
 */


int FUN__text__00462550(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0xe8) != 0) { // [自动静态注释] 条件判断/分支
    puVar3 = *(undefined8 **)(param_1 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar1 = (**(code **)(*(long *)*puVar3 + 0x138))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 != 1) { // [自动静态注释] 条件判断/分支
        for (puVar2 = *(undefined8 **)(param_1 + 0xe0); puVar3 != puVar2; puVar2 = puVar2 + 1) { // [自动静态注释] 循环/迭代
          (**(code **)(*(long *)*puVar2 + 0x140))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      puVar3 = puVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != (undefined8 *) // [自动静态注释] 循环/迭代
                       (*(long *)(param_1 + 0xe0) + (ulong)*(uint *)(param_1 + 0xe8) * 8)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


