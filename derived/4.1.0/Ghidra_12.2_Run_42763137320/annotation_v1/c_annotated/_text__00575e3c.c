/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00475E3C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00575e3c; name: FUN_.text__00575e3c
 */


void FUN__text__00575e3c(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (((*(char *)(lVar1 + 0x98) != '\0') && (*(int *)(lVar1 + 0x88) != 0)) && // [自动静态注释] 条件判断/分支
     ((*(int *)(lVar1 + 0x88) != 1 || (*(char *)(param_1 + 0x138) != '\0')))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0057bf1c(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(lVar1 + 0x2c),
                        *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x10
                        ,*(undefined4 *)(lVar1 + 0x8c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x90) =
         *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88);
    lVar1 = *(long *)(param_1 + 0x158); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((*(int *)(lVar1 + 0x88) == 1) && (*(char *)(param_1 + 0x138) == '\x02')) { // [自动静态注释] 条件判断/分支
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x130)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0057bf1c(uVar2,*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x24), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(lVar1 + 0x2c),
                          *(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 +
                          0xb0,*(undefined4 *)(lVar1 + 0x8c)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(*(long *)(param_1 + 0x148) + (ulong)*(byte *)(param_1 + 0x136) * 0xa0 + 0x130)
           = *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x88); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


