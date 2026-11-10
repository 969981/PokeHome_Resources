/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00434488
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00534488; name: FUN_.text__00534488
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00534488(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = FUN__text__0050c2a0(param_2,*(undefined8 *) // [自动静态注释] 调用尚未恢复正式名称的函数
                                       (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x38) + // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                                       0x68)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  lVar3 = _DAT_008a40c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00536c78(*(undefined4 *)(_DAT_008a40c0 + 0x18),*(undefined4 *)(_DAT_008a40c0 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                        auStack_60,*_DAT_008a40c8,*(undefined4 *)(_DAT_008a40c0 + 0xc), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        *(undefined4 *)(_DAT_008a40c0 + 0x10));
    FUN__text__0053a4dc(auStack_60,*(undefined4 *)(lVar3 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0053a4e4(auStack_60,*(undefined1 *)(lVar3 + 0x24)); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = FUN__text__0050c2e0(param_2,**(undefined8 **)(param_1 + 0x30)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar3 = *(long *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(lVar3 + 0x78) = 0;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    *(undefined4 *)(lVar3 + 0x60) = 0;
    *(undefined4 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar4 = FUN__text__00532f00(*(undefined8 *)(param_1 + 0x38),lVar1, // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined8 *)(param_1 + 0x30),uVar2);
    if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__0053a044(auStack_60,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30) // [自动静态注释] 调用尚未恢复正式名称的函数
                          ,uVar2,lVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0052c540(*(long *)(param_1 + 0x30) + 8,uVar2,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined4 *)(*(long *)(param_1 + 0x30) + 300) =
         *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x128);
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN__text__00536cac(auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


