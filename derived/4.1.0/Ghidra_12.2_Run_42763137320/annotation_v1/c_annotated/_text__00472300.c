/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00372300
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00472300; name: FUN_.text__00472300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00472300(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex(_DAT_008a4d18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (DAT_00aea758 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    puVar2 = (undefined8 *)FUN__text__00400f80(0,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar2 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__004723f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (DAT_00aea758 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        puVar2 = (undefined8 *)FUN__text__00400f80(0,0x20); // [自动静态注释] 调用尚未恢复正式名称的函数
        *puVar2 = DAT_00aea758;
        DAT_00aea758 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *puVar2 = DAT_00aea758;
      DAT_00aea758 = puVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (DAT_00aea750 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    DAT_00aea748 = DAT_00aea758; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *DAT_00aea750 = DAT_00aea758;
  } // [自动静态注释] 作用域/控制流边界
  DAT_00aea750 = DAT_00aea758; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *DAT_00aea758; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *DAT_00aea758 = 0;
  DAT_00aea758 = (undefined8 *)uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar2 = DAT_00aea750; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00aea76c = DAT_00aea76c + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  DAT_00aea750[1] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar2 + 2) = param_3;
  *(undefined4 *)((long)puVar2 + 0x14) = param_4;
  *(undefined4 *)(puVar2 + 3) = param_1;
  nn::os::UnlockMutex(_DAT_008a4d18); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


