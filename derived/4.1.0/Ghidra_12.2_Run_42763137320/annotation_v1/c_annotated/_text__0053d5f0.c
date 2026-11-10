/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0043D5F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d5f0; name: FUN_.text__0053d5f0
 */


undefined8 FUN__text__0053d5f0(long *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar4 = (ulong)uVar1 * 0x138; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*param_1 == 0) { // [自动静态注释] 条件判断/分支
    uVar2 = *(uint *)(param_1 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = FUN__text__00400f90(9,lVar4,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar3 != 0) && (lVar3 != lVar4)) { // [自动静态注释] 条件判断/分支
        if (uVar2 != 0) { // [自动静态注释] 条件判断/分支
          lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            __dest = (undefined4 *)(lVar4 + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *__dest = 0;
            *(undefined8 *)(__dest + 2) = 0;
            *(undefined8 *)(__dest + 4) = 0;
            __dest[0x4c] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined8 *)(__dest + 0x46) = 0;
            *(undefined8 *)(__dest + 6) = 0;
            *(undefined8 *)(__dest + 8) = 0;
            *(undefined8 *)(__dest + 10) = 0;
            *(undefined8 *)(__dest + 0xc) = 0;
            *(undefined8 *)(__dest + 0xe) = 0;
            *(undefined8 *)(__dest + 0x10) = 0;
            *(undefined8 *)(__dest + 0x12) = 0;
            *(undefined8 *)(__dest + 0x14) = 0;
            *(undefined8 *)(__dest + 0x16) = 0;
            *(undefined8 *)(__dest + 0x18) = 0;
            *(undefined8 *)(__dest + 0x1a) = 0;
            *(undefined8 *)(__dest + 0x1c) = 0;
            *(undefined8 *)(__dest + 0x1e) = 0;
            *(undefined8 *)(__dest + 0x20) = 0;
            *(undefined8 *)(__dest + 0x22) = 0;
            *(undefined8 *)(__dest + 0x24) = 0;
            *(undefined8 *)(__dest + 0x26) = 0;
            *(undefined8 *)(__dest + 0x28) = 0;
            *(undefined8 *)(__dest + 0x2a) = 0;
            *(undefined8 *)(__dest + 0x2c) = 0;
            *(undefined8 *)(__dest + 0x2e) = 0;
            *(undefined8 *)(__dest + 0x30) = 0;
            *(undefined8 *)(__dest + 0x48) = 0;
            *(undefined8 *)(__dest + 0x4a) = 0x3f80000000000000;
            *(undefined8 *)(__dest + 0x32) = 0;
            *(undefined8 *)(__dest + 0x34) = 0;
            *(undefined8 *)(__dest + 0x36) = 0;
            *(undefined8 *)(__dest + 0x38) = 0;
            *(undefined8 *)(__dest + 0x3a) = 0;
            *(undefined8 *)(__dest + 0x3c) = 0;
            *(undefined8 *)(__dest + 0x3e) = 0;
            *(undefined8 *)(__dest + 0x40) = 0;
            *(undefined8 *)(__dest + 0x42) = 0;
            *(undefined8 *)(__dest + 0x44) = 0;
            memcpy(__dest,(void *)(*param_1 + lVar3),0x134); // [自动静态注释] 内存复制、清零或移动
            lVar3 = lVar3 + 0x138; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)uVar2 * 0x138 != lVar3); // [自动静态注释] 循环/迭代
          lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(9,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__0053d714; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = FUN__text__00400fb0(9,*param_1,lVar4,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
LAB__text__0053d714: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *param_1 = lVar4;
      *(uint *)((long)param_1 + 0xc) = uVar1;
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


