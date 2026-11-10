/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0057FD5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fd5c; name: FUN_.text__0067fd5c
 */


undefined8 FUN__text__0067fd5c(long param_1,uint param_2,undefined8 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__00680914(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar1 + 0xdc) == 5)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    uVar2 = 0xfffffe0b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((((param_2 & 1) != 0) && (*(char *)(param_1 + 0x9aa) == '\0')) && // [自动静态注释] 条件判断/分支
       ((lVar1 = *(long *)(param_1 + 0x138), lVar1 != 0 && // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        ((*(int *)(lVar1 + 8) <= (int)param_2 && (param_2 < *(uint *)(param_1 + 0x930))))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      do { // [自动静态注释] 循环/迭代
        if ((int)param_2 <= *(int *)(lVar1 + 8)) { // [自动静态注释] 条件判断/分支
          if ((int)param_2 < *(int *)(lVar1 + 8)) { // [自动静态注释] 条件判断/分支
            return 0xfffffe0b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          puVar3 = (undefined8 *)(lVar1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto LAB__text__0067fde0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        lVar1 = *(long *)(lVar1 + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar1 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    puVar3 = (undefined8 *)(lVar1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__0067fde0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = param_3;
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


