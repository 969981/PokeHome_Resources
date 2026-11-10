/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045CD30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cd30; name: FUN_.text__0055cd30
 */


void FUN__text__0055cd30(long param_1,undefined4 *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_1 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)((long)param_2 + 0x11) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0055d6c4(param_2[2],param_2[1],param_2[3],lVar1,0,*(undefined4 *)(param_1 + 0x108), // [自动静态注释] 调用尚未恢复正式名称的函数
                        *param_2);
    FUN__text__0055d6ec(lVar1,0,*(undefined1 *)(param_2 + 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)((long)param_2 + 0x25) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0055d6c4(param_2[7],param_2[6],param_2[8],lVar1,1,*(undefined4 *)(param_1 + 0x108), // [自动静态注释] 调用尚未恢复正式名称的函数
                        param_2[5]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__0055d6ec(lVar1,1,*(undefined1 *)(param_2 + 9)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)((long)param_2 + 0x39) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0055d6c4(param_2[0xc],param_2[0xb],param_2[0xd],lVar1,2, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0x108),param_2[10]);
    FUN__text__0055d6ec(lVar1,2,*(undefined1 *)(param_2 + 0xe)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar1 = param_1 + 0x30; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)((long)param_2 + 0x4d) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0055d6c4(param_2[0x11],param_2[0x10],param_2[0x12],lVar1,0, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0x108),param_2[0xf]);
    FUN__text__0055d6ec(lVar1,0,*(undefined1 *)(param_2 + 0x13)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)((long)param_2 + 0x61) != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__0055d6c4(param_2[0x16],param_2[0x15],param_2[0x17],lVar1,1, // [自动静态注释] 调用尚未恢复正式名称的函数
                        *(undefined4 *)(param_1 + 0x108),param_2[0x14]);
    FUN__text__0055d6ec(lVar1,1,*(undefined1 *)(param_2 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)((long)param_2 + 0x75) == '\0') { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0055d6c4(param_2[0x1b],param_2[0x1a],param_2[0x1c],lVar1,2, // [自动静态注释] 调用尚未恢复正式名称的函数
                      *(undefined4 *)(param_1 + 0x108),param_2[0x19]);
  FUN__text__0055d6ec(lVar1,2,*(undefined1 *)(param_2 + 0x1d)); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


