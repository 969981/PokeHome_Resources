/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0059A928
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069a928; name: FUN_.text__0069a928
 */


void FUN__text__0069a928(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((int)param_2 < 0x1c) { // [自动静态注释] 条件判断/分支
    uVar2 = param_2 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (-1 < (int)param_2) { // [自动静态注释] 条件判断/分支
      uVar2 = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = (int)uVar2 >> 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 < 2) { // [自动静态注释] 条件判断/分支
      uVar2 = param_2 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (-1 < (int)-param_2) { // [自动静态注释] 条件判断/分支
        uVar2 = -(-param_2 & 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      if (uVar2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0069a96c */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK__text__0069a978 + (ulong)*(byte *)((ulong)uVar2 + 0x765f5b) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else if (uVar2 < 7) { // [自动静态注释] 条件判断/分支
      uVar3 = *(uint *)(param_1 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((uVar3 >> 0x10 & 1) == 0) { // [自动静态注释] 条件判断/分支
        if ((uVar3 >> 0x11 & 1) != 0) { // [自动静态注释] 条件判断/分支
          uVar4 = uVar2 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          param_2 = param_2 + uVar2 * -4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar1 = *(long *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                  (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  ((ulong)(uVar3 >> 0xc) & 0x10) * ((ulong)(uVar3 >> 6) & 7) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          uVar2 = *(uint *)(lVar1 + (ulong)(uVar4 % 5) * 4 + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (param_2 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0069aa54 */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK__text__0069aa60 + (ulong)*(byte *)((ulong)param_2 + 0x765f57) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
          if (uVar4 < 5) { // [自动静态注释] 条件判断/分支
            *(uint *)(lVar1 + (ulong)uVar4 * 4 + 0x60) =
                 (uVar2 >> 0x10 & 0xff) << 0x10 | uVar2 & 0xff000000 | (uVar2 >> 8 & 0xff) << 8 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 uVar2 & 0xff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar2 = uVar2 - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar1 = *(long *)(param_1 + 0x18) + // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                (((ulong)uVar3 & 3) * 0x10 + ((ulong)uVar3 & 0x30) | (ulong)(uVar3 >> 6) & 8) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((ulong)(uVar3 >> 8) & 0xc) + ((ulong)(uVar3 >> 4) & 0x1c) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                ((ulong)(uVar3 >> 0xc) & 8) + (ulong)(-(uVar3 >> 0xc & 1) & 0xc) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (((ulong)(uVar3 >> 0xd) & 3) + ((ulong)(uVar3 >> 2) & 3)) * 0x14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar4 = *(uint *)(lVar1 + (ulong)(uVar2 % 5) * 4 + 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = param_2 & 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (-1 < (int)-param_2) { // [自动静态注释] 条件判断/分支
          uVar3 = -(-param_2 & 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (uVar3 < 4) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not emulate address calculation at 0x0069ab24 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK__text__0069ab30 + (ulong)*(byte *)((ulong)uVar3 + 0x765f53) * 4))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        if (uVar2 < 5) { // [自动静态注释] 条件判断/分支
          *(uint *)(lVar1 + (ulong)uVar2 * 4 + 4) =
               (uVar4 >> 0x10 & 0xff) << 0x10 | uVar4 & 0xff000000 | (uVar4 >> 8 & 0xff) << 8 | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
               uVar4 & 0xff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


