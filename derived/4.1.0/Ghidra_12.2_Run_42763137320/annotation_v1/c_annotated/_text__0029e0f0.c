/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0019E0F0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0029e0f0; name: FUN_.text__0029e0f0
 */


void FUN__text__0029e0f0(long param_1,undefined8 *param_2,undefined8 *param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char local_3c [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s = (void *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(FUN__text__0040007c + param_1 + 4) = *param_3;
  uVar1 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(&DAT__text__00400070 + param_1) = *param_2;
  *(undefined8 *)(&DAT__text__00400078 + param_1) = uVar1;
  memset(__s,0,0x400000); // [自动静态注释] 内存复制、清零或移动
  FUN__text__00240ddc(&local_38,*(undefined8 *)(param_1 + 8),0x732820); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (*(long *)(param_1 + 0x58) != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(param_1 + 0x58) = local_38;
  pcVar3 = *(code **)(local_38 + 0x378); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (pcVar3 != (code *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined8 *)(local_38 + 0x380) = 0;
    *(undefined8 *)(local_38 + 0x388) = 0;
    *(undefined8 *)(local_38 + 0x370) = 0;
    *(undefined8 *)(local_38 + 0x378) = 0;
    (*pcVar3)(local_38 + 0x390); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(local_38 + 0x394) = 1;
  *(code **)(local_38 + 0x370) = FUN__text__0029ea74;
  *(undefined **)(local_38 + 0x378) = &DAT__text__0029ef38;
  *(undefined1 *)(local_38 + 0x390) = 0;
  *(long *)(local_38 + 0x398) = param_1;
  *(undefined1 **)(local_38 + 0x380) = &LAB__text__0029f4b4;
  *(undefined1 **)(local_38 + 0x388) = &LAB__text__0029f4c0;
  FUN__text__005e896c(*(undefined8 *)(param_1 + 0x58),0x7132c5,0xffffffff,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__0029e238: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      local_3c[0] = '\0'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = FUN__text__0029e2bc(param_1,__s,*(undefined8 *)(&DAT__text__00400068 + param_1), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  local_3c); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
        if (local_3c[0] == '\0') { // [自动静态注释] 条件判断/分支
          FUN__text__002a17b0(*(undefined8 *)(param_1 + 0x60),__s); // [自动静态注释] 调用尚未恢复正式名称的函数
          *(undefined4 *)(param_1 + 0x40008c) = 2;
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        *(undefined4 *)(param_1 + 0x40008c) = 3;
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
LAB__text__0029e278: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 0x40008c) = 5;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(byte *)(lVar4 + 0x25a) & 1) != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x58)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar4 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      if (*(int *)(param_1 + 0x400088) != 0) goto LAB__text__0029e278; // [自动静态注释] 条件判断/分支
      goto LAB__text__0029e238; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    nn::os::SleepThread(1000000); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


