/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00332788
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432788; name: FUN_.text__00432788
 */


undefined8 FUN__text__00432788(long param_1,void *param_2,int param_3,undefined4 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar3 = (long *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*plVar3 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar1 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0x28) = 1;
    *(int *)(param_1 + 0x20) = param_3 + 2;
    lVar2 = FUN__text__00400f80(0,(param_3 + 2) * 0x14); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0x20) = 0;
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(undefined4 *)(param_1 + 0x24) = param_4;
    memcpy((void *)(lVar2 + 0xc),param_2,(ulong)(uint)(param_3 * 0xc)); // [自动静态注释] 内存复制、清零或移动
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 8) = 9;
    **(undefined4 **)(param_1 + 0x18) = 0xff7fffff;
    *(undefined4 *)(*(long *)(param_1 + 0x18) + 4) =
         *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x10);
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc + 8) = 9
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc) =
         0x7f7fffff; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 1) * 0xc + 4) =
         *(undefined4 *)
          (*(long *)(param_1 + 0x18) + (ulong)(*(int *)(param_1 + 0x20) - 2) * 0xc + 4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00432e60(plVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((*(long *)(param_1 + 0x18) != 0) && ((*(uint *)(param_1 + 0x20) & 0xfffffffd) != 0)) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(long *)(param_1 + 0x18) + 0xc);
      local_24 = *(undefined4 *)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0041a060(plVar3,&local_24,&local_28); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x28) = local_24;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x38) = local_28;
      *(undefined4 *)(param_1 + 0x3c) = local_28;
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


