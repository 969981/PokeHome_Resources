/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043495C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053495c; name: FUN_.text__0053495c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0053495c(long param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_70 [48]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x30)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__0050c2e0(param_2,*(undefined8 *)(param_1 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__0050c2a0(param_2,*(undefined8 *)(param_1 + 0x40)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((lVar2 != 0) && (lVar3 != 0)) && (lVar4 != 0)) { // [自动静态注释] 条件判断/分支
    plVar5 = *(long **)(param_1 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)(plVar5 + 5) = 0;
    plVar5[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    (**(code **)(*plVar5 + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00533c90(lVar2,lVar3,lVar4,*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar1 = _DAT_008a40c0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00536c78(*(undefined4 *)(_DAT_008a40c0 + 0x18),0x42c80000,auStack_70,*_DAT_008a40c8, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(_DAT_008a40c0 + 0xc),*(undefined4 *)(_DAT_008a40c0 + 0x10));
    FUN__text__0053a4dc(auStack_70,*(undefined4 *)(lVar1 + 0x14)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0053a4e4(auStack_70,*(undefined1 *)(lVar1 + 0x24)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0053a26c(auStack_70,lVar2,lVar3,lVar4,*(undefined8 *)(param_1 + 0x48)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__00536cac(auStack_70); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0052c540(*(undefined8 *)(param_1 + 0x48),lVar2,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


