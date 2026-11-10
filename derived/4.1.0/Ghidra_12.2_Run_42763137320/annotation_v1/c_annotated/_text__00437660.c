/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00337660
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437660; name: FUN_.text__00437660
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00437660(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_70; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = *(long *)(param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != param_2) { // [自动静态注释] 条件判断/分支
    *(long *)(param_1 + 0x20) = param_2;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__004377e0(param_1,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00434700(*_DAT_008a45f0,*(undefined8 *)(lVar2 + 0x28),lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (*(long *)(lVar2 + 8) != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      *(long *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined4 *)(lVar2 + 0x18) = 1;
      FUN__text__00400fc0(0x10,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00434ed0(*_DAT_008a45f0,*(undefined8 *)(param_2 + 0x28),&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_18 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_2 + 8) != 0) { // [自动静态注释] 条件判断/分支
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 0x18)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0041a060(local_14,(long *)(param_2 + 8),&local_78,&local_18); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_2 + 0x18) = (undefined4)local_78;
    } // [自动静态注释] 作用域/控制流边界
    iVar1 = *(int *)(param_1 + 0x70); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(int *)(param_1 + 0x70) = local_18;
    if ((local_18 != iVar1) && (*(int *)(param_1 + 0x60) != 0)) { // [自动静态注释] 条件判断/分支
      local_60 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_78 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_48 = (undefined4)*(undefined8 *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_70 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_68 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_50 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(param_1 + 0x69) = *(char *)(param_1 + 0x69) + '\x01';
      *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + '\x04';
      local_40 = &local_78; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_44 = (undefined1)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = iVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iStack_34 = local_18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__00438120(param_1 + 0x58,&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(char *)(param_1 + 0x68) = *(char *)(param_1 + 0x68) + -4;
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004377e0(param_1,0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


