/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035BF40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045bf40; name: FUN_.text__0045bf40
 */


void FUN__text__0045bf40(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *(long *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 0x120); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar1 = lVar3 + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0045cc00(lVar1 + 0xe8); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00451d7c(lVar1 + 0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__00451cdc(lVar1 + 0xc0); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (*(long *)(lVar1 + 0x80) != 0) { // [自动静态注释] 条件判断/分支
          *(undefined4 *)(lVar1 + 0x88) = 0;
          (**(code **)(**(long **)(lVar1 + 0x78) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined8 *)(lVar1 + 0x80) = 0;
          *(undefined4 *)(lVar1 + 0x8c) = 0;
        } // [自动静态注释] 作用域/控制流边界
        if ((*(long *)(lVar1 + 0xa0) != 0) && (*(char *)(lVar1 + 0xa8) != '\0')) { // [自动静态注释] 条件判断/分支
          (**(code **)(**(long **)(lVar1 + 0x98) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(undefined1 *)(lVar1 + 0xa8) = 0;
        } // [自动静态注释] 作用域/控制流边界
        lVar4 = lVar4 + 0x118; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined8 *)(lVar1 + 0xa0) = 0;
      } while ((ulong)uVar2 * 0x118 != lVar4); // [自动静态注释] 循环/迭代
      lVar3 = *(long *)(param_1 + 0x118); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (lVar3 != param_1) { // [自动静态注释] 条件判断/分支
      FUN__text__00400fc0(0,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined4 *)(param_1 + 0x124) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


