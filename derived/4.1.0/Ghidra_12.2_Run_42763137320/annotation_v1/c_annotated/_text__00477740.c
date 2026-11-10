/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00377740
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477740; name: FUN_.text__00477740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00477740(long *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_3c [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = _DAT_008a46e8 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = _DAT_008a46e8 + 0xe0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2;
  local_3c[0] = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)param_1[0x3d] != 0) { // [自动静态注释] 条件判断/分支
    puVar3 = (undefined8 *)param_1[0x3c]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00432ba0(param_1 + 0xb,puVar3[2],local_3c); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (local_3c[0] == '\0') { // [自动静态注释] 条件判断/分支
        FUN__text__00433930(param_1,*puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      puVar3 = puVar3 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar3 != (undefined8 *)(param_1[0x3c] + (ulong)*(uint *)(param_1 + 0x3d) * 0x18)); // [自动静态注释] 循环/迭代
    lVar2 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x3d) = 0;
  local_38 = (**(code **)(lVar2 + 0x38))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__0046c3b0(param_1,&local_38,uVar1 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00433a20(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x35] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x36) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x35] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[0x37] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x37] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  } // [自动静态注释] 作用域/控制流边界
  puVar3 = (undefined8 *)param_1[0x3f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    if (*(uint *)(param_1 + 0x40) != 0) { // [自动静态注释] 条件判断/分支
      lVar2 = (ulong)*(uint *)(param_1 + 0x40) * 0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = lVar2 + -0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar3 = puVar3 + 0x11; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar2 != 0); // [自动静态注释] 循环/迭代
      puVar3 = (undefined8 *)param_1[0x3f]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN__text__00400fc0(0,puVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x3f] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x204) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_1[0x3c] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x3d) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x3c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0047b380(param_1 + 0x31); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (param_1[0x1e] != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x1f) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1[0x1e] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00458c80(param_1 + 0xf); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__0046bd8c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


