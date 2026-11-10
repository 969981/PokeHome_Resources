/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00351A80
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451a80; name: FUN_.text__00451a80
 */


undefined8 FUN__text__00451a80(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar3 = FUN__text__00400f80(0,(ulong)uVar1 * 0x88); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar4 != 0) && (lVar4 != lVar3)) { // [自动静态注释] 条件判断/分支
      if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
        lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          __dest = (void *)(lVar3 + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)((long)__dest + 0x50) = 0;
          *(undefined8 *)((long)__dest + 0x30) = 0;
          *(undefined8 *)((long)__dest + 0x38) = 0x3f80000000000000;
          *(undefined4 *)((long)__dest + 0x58) = 0;
          *(undefined8 *)((long)__dest + 0x5c) = 0x3f80000042c80000;
          *(undefined8 *)((long)__dest + 100) = 0xffffffff;
          *(undefined4 *)((long)__dest + 0x80) = 0;
          *(undefined8 *)((long)__dest + 0x40) = 0x3f8000003f800000;
          *(undefined8 *)((long)__dest + 0x48) = 0;
          *(undefined8 *)((long)__dest + 0x70) = 0;
          *(undefined8 *)((long)__dest + 0x78) = 0x3f800000;
          memcpy(__dest,(void *)(*param_1 + lVar4),0x84); // [自动静态注释] 内存复制、清零或移动
          lVar4 = lVar4 + 0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while ((ulong)uVar2 * 0x88 != lVar4); // [自动静态注释] 循环/迭代
        lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__00400fc0(0,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = FUN__text__00400fa0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = lVar3;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


